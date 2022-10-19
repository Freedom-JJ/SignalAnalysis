/******************************************************************************
 * Copyright 2022/10/11 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       ThreadSafeQueue.h
 * @brief      文件概述：线程安全队列类模板
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/11
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#ifndef THREADSAFEQUEUE_H
#define THREADSAFEQUEUE_H
#include <queue>
#include <mutex>
#include <memory>
#include <condition_variable>
template <typename T>
class ThreadSafeQueue
{

private:
    std::queue<T> data_queue;
    std::mutex mut;
    std::condition_variable cond;

public:
    ThreadSafeQueue(){}
    ThreadSafeQueue(const ThreadSafeQueue &safeQuene) {
            data_queue = safeQuene.data_queue;
        }
    ~ThreadSafeQueue(){}

    void push(T new_data)
    {
        std::lock_guard<std::mutex> lk(mut);            // 1.全局加锁
        data_queue.push(std::move(new_data));           // 2.push时独占锁
        cond.notify_one();
    }

    unsigned int size(){
           std::lock_guard<std::mutex> lk(mut);
           return data_queue.size();
       }

    void wait_and_pop(T& val)
       {
           std::unique_lock<std::mutex> ulk(mut);                    // 3.全局加锁
           cond.wait(ulk, [this]() { return !data_queue.empty(); });  // 4.front 和 pop_front时独占锁
           val = std::move(data_queue.front());
           data_queue.pop();
       }

        T front(){
           std::lock_guard<std::mutex> lk(mut);
           return data_queue.front();
       }

       std::shared_ptr<T> wait_and_pop()
       {
           std::unique_lock<std::mutex> ulk(mut);
           cond.wait(ulk, [this]() { return !data_queue.empty(); });
           std::shared_ptr<T> val(std::make_shared<T>(std::move(data_queue.front())));
           data_queue.pop();
           return val;
       }

       bool try_pop(T& val)
       {
           std::lock_guard<std::mutex> lk(mut);
           if (data_queue.empty())
               return false;
           val = std::move(data_queue.front());
           data_queue.pop();
           return true;
       }

       std::shared_ptr<T> try_pop()
       {
           std::shared_ptr<T> val;
           std::lock_guard<std::mutex> lk(mut);
           if (data_queue.empty())
               return val;
           val = std::make_shared<T>(std::move(data_queue.front()));
           data_queue.pop();
           return val;
       }

       void clear()
       {
           std::lock_guard<std::mutex> lk(mut);
           std::queue<T> empty;
           swap(empty, data_queue);
       }

       bool empty()
       {
           std::lock_guard<std::mutex> lk(mut);
           return data_queue.empty();
       }


};

#endif // THREADSAFEQUEUE_H
