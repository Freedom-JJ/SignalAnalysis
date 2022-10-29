-- MySQL dump 10.13  Distrib 5.7.39, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: aricraft_db
-- ------------------------------------------------------
-- Server version	5.7.39-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `post`
--

DROP TABLE IF EXISTS `post`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `post` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `post` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE KEY `post_id` (`id`) USING BTREE,
  UNIQUE KEY `post` (`post`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `post`
--

LOCK TABLES `post` WRITE;
/*!40000 ALTER TABLE `post` DISABLE KEYS */;
INSERT INTO `post` VALUES (1,'普通用户'),(2,'管理员');
/*!40000 ALTER TABLE `post` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `project`
--

DROP TABLE IF EXISTS `project`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `project` (
  `id` int(11) NOT NULL AUTO_INCREMENT COMMENT '项目id',
  `projectName` varchar(255) NOT NULL COMMENT '项目名称',
  `projectCreateTime` varchar(255) DEFAULT NULL COMMENT '项目创建时间',
  `projectUpdateTime` varchar(255) DEFAULT NULL COMMENT '项目更新时间',
  `userId` int(11) DEFAULT NULL COMMENT '用户id',
  `projectParameterId` int(11) DEFAULT NULL COMMENT '项目参数id',
  `projectStatus` int(11) DEFAULT NULL COMMENT ' 1默认状态 2 正在使用 3 删除',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `project`
--

LOCK TABLES `project` WRITE;
/*!40000 ALTER TABLE `project` DISABLE KEYS */;
/*!40000 ALTER TABLE `project` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `single_signal`
--

DROP TABLE IF EXISTS `single_signal`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `single_signal` (
  `id` varchar(255) NOT NULL COMMENT '单通道信号id',
  `channelId` int(11) DEFAULT NULL COMMENT '用来保存该通道的参数的记录的id',
  `sumSignalId` varchar(255) DEFAULT NULL COMMENT '用来保存该批次信号的共同id',
  `signalStatus` int(11) DEFAULT NULL COMMENT '信号的状态',
  `dataUrl` varchar(255) DEFAULT NULL COMMENT '信号的保存路径',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `single_signal`
--

LOCK TABLES `single_signal` WRITE;
/*!40000 ALTER TABLE `single_signal` DISABLE KEYS */;
/*!40000 ALTER TABLE `single_signal` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sumsignal`
--

DROP TABLE IF EXISTS `sumsignal`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `sumsignal` (
  `id` varchar(255) NOT NULL COMMENT '该批次信号的公共id',
  `startTime` varchar(100) DEFAULT NULL COMMENT '该批信号的开始采集时间',
  `endTime` varchar(100) DEFAULT NULL COMMENT '该批信号的结束采集时间',
  PRIMARY KEY (`id`),
  KEY `startTimeIndex` (`startTime`) USING BTREE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sumsignal`
--

LOCK TABLES `sumsignal` WRITE;
/*!40000 ALTER TABLE `sumsignal` DISABLE KEYS */;
/*!40000 ALTER TABLE `sumsignal` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `user` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `loginName` varchar(255) NOT NULL COMMENT '登录名',
  `loginPassword` varchar(255) DEFAULT NULL COMMENT '登录密码',
  `name` varchar(255) DEFAULT NULL COMMENT '检测人员姓名',
  `postId` int(11) DEFAULT NULL COMMENT '检测人员职务',
  `telephone` varchar(20) DEFAULT NULL COMMENT '检测人员电话',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE KEY `login_name` (`loginName`) USING BTREE,
  KEY `post_id` (`postId`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=19 DEFAULT CHARSET=utf8 ROW_FORMAT=COMPACT;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (10,'ljlgg','123456','ljl',1,'123535646'),(12,'ljl','123456','ljl',1,'123535646'),(13,'ljlg','123456','ljl',1,'123535646'),(14,'ljlgigeg','123456','ljl',1,'123535646'),(15,'ljlgigegge','123456','ljl',1,'123535646'),(16,'ljlgiggegge','123456','ljl',1,'123535646');
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-10-27 22:55:00
