#include "productcontroller.h"


ProductController::ProductController(PDSQL* pdsql):m_productService(pdsql)
{
}


ProductController::~ProductController()
{
}
Result ProductController::FindAllProduct(vector<TbProduct> & productVec){

    bool flag = m_productService.GetAllProductBySearchCondition(TbProduct(), productVec);
    if (flag){
        return Result(true, "产品加载成功");
    }
    else{
        return Result(false, "产品加载失败");
    }
}


Result ProductController::DeleteByProductId(TbProduct collectionparas)
{


    bool flag = m_productService.DeletProductByID(collectionparas);
    if (flag){
        return Result(true, "产品加载成功");
    }
    else{
        return Result(false, "产品加载失败");
    }
}


Result ProductController::UpdateProduct(TbProduct product)
{

    bool flag = m_productService.UpdateProduct(product);
    if (flag){
        return Result(true, "产品加载成功");
    }
    else{
        return Result(false, "产品加载失败");
    }

}

Result ProductController::AddProduct(TbProduct product)
{
    bool flag = m_productService.AddProduct(product);
    if (flag){
        return Result(true, "产品加载成功");
    }
    else{
        return Result(false, "产品加载失败");
    }

}

/**
 * @brief ProductController::FindProductByProductName
 * @param product
 * @param vProduct
 * @return
 */
Result ProductController::FindProductByProductName(TbProduct product, vector<TbProduct> &vProduct)
{

    bool flag = m_productService.GetAllProductBySearchCondition(product, vProduct);
    if (flag){
        return Result(true, "产品加载成功");
    }
    else{
        return Result(false, "产品加载失败");
    }

}

Result ProductController::GetById(int  productId, TbProduct &product){
    bool flag = m_productService.GetById(productId, product);
    if (flag){
        return Result(true, "产品加载成功");
    }
    else{
        return Result(false, "产品加载失败");
    }
}
