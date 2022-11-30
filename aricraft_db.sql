/*
 Navicat Premium Data Transfer

 Source Server         : HelloWorld
 Source Server Type    : MySQL
 Source Server Version : 50730
 Source Host           : localhost:3306
 Source Schema         : aricraft_db

 Target Server Type    : MySQL
 Target Server Version : 50730
 File Encoding         : 65001

 Date: 30/11/2022 10:07:09
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for channel
-- ----------------------------
DROP TABLE IF EXISTS `channel`;
CREATE TABLE `channel`  (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `channelCode` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '传感器标识',
  `channelDesc` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '传感器描述',
  `measureType` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '测量类型',
  `fullValue` int(11) NULL DEFAULT NULL COMMENT '满度量程',
  `inputMode` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '输入方式，参考字典表',
  `upFreq` int(50) NULL DEFAULT NULL COMMENT '上限频率',
  `elcPressure` int(255) NULL DEFAULT NULL COMMENT '电压测量范围',
  `projectId` int(11) NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 16 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Compact;

-- ----------------------------
-- Records of channel
-- ----------------------------
INSERT INTO `channel` VALUES (8, '0', '', '电压测量', 10000, '交流输入', 0, 10000, 22);
INSERT INTO `channel` VALUES (9, '1', '', '电压测量', 5000, '单端直流输入', 0, 5000, 22);
INSERT INTO `channel` VALUES (10, '2', '', '电压测量', 2000, '单端压电集成', 0, 2000, 22);
INSERT INTO `channel` VALUES (11, '3', '', '电压测量', 1000, '差分直流输入', 0, 1000, 22);
INSERT INTO `channel` VALUES (12, '0', '', '电压测量', 1000, '差分直流输入', 0, 10000, 23);
INSERT INTO `channel` VALUES (13, '1', '', '电压测量', 2000, '差分直流输入', 0, 5000, 23);
INSERT INTO `channel` VALUES (14, '2', '', '电压测量', 5000, '差分直流输入', 0, 2000, 23);
INSERT INTO `channel` VALUES (15, '3', '', '电压测量', 10000, '差分直流输入', 0, 1000, 23);

-- ----------------------------
-- Table structure for collectionparas
-- ----------------------------
DROP TABLE IF EXISTS `collectionparas`;
CREATE TABLE `collectionparas`  (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `sampleFrequency` int(255) NULL DEFAULT NULL COMMENT '采样频率',
  `collectionMethod` int(11) NULL DEFAULT NULL COMMENT '采样方式',
  `triggerMethod` int(11) NULL DEFAULT NULL COMMENT '触发方式',
  `dataBlocks` int(11) NULL DEFAULT NULL COMMENT '数据块数',
  `delayBlocks` int(11) NULL DEFAULT NULL COMMENT '延迟块数',
  `triggerTimes` int(11) NULL DEFAULT NULL COMMENT '触发次数',
  `line` int(11) NULL DEFAULT NULL COMMENT '采集点数',
  `sampleBatch` int(11) NULL DEFAULT NULL COMMENT '采样批次',
  `sampleClk` int(255) NULL DEFAULT NULL COMMENT '采样时钟',
  PRIMARY KEY (`id`) USING BTREE,
  INDEX `simple_frequency`(`sampleFrequency`) USING BTREE,
  INDEX `sampling_method`(`collectionMethod`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 9 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Compact;

-- ----------------------------
-- Records of collectionparas
-- ----------------------------
INSERT INTO `collectionparas` VALUES (1, 0, 2004004, 0, 0, 0, 0, 0, 0, 0);
INSERT INTO `collectionparas` VALUES (3, 0, 0, 0, 0, 0, 0, 0, 0, 0);
INSERT INTO `collectionparas` VALUES (4, 3, 0, 0, 0, 0, 0, 0, 0, 0);
INSERT INTO `collectionparas` VALUES (5, 3, 0, 0, 0, 0, 0, 0, 0, 0);
INSERT INTO `collectionparas` VALUES (6, 0, 0, 0, 0, 20000, 0, 0, 0, 0);
INSERT INTO `collectionparas` VALUES (7, 0, 0, 0, 0, 20000, 0, 0, 0, 0);
INSERT INTO `collectionparas` VALUES (8, 0, 0, 0, 0, 20000, 0, 0, 0, 0);

-- ----------------------------
-- Table structure for dictionary
-- ----------------------------
DROP TABLE IF EXISTS `dictionary`;
CREATE TABLE `dictionary`  (
  `id` int(11) NOT NULL AUTO_INCREMENT COMMENT '字典ID',
  `dictName` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `dictValue` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 205 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Compact;

-- ----------------------------
-- Records of dictionary
-- ----------------------------
INSERT INTO `dictionary` VALUES (1, 'samplefrequency', '{\"title\":\"128HZ\",\"content\":128}');
INSERT INTO `dictionary` VALUES (2, 'samplefrequency', '{\"title\":\"256HZ\",\"content\":256}');
INSERT INTO `dictionary` VALUES (3, 'samplefrequency', '{\"title\":\"512HZ\",\"content\":512}');
INSERT INTO `dictionary` VALUES (4, 'samplefrequency', '{\"title\":\"1.28KHZ\",\"content\":1280}');
INSERT INTO `dictionary` VALUES (5, 'samplefrequency', '{\"title\":\"2.56KHZ\",\"content\":2560}');
INSERT INTO `dictionary` VALUES (6, 'samplefrequency', '{\"title\":\"5.12KHZ\",\"content\":5120}');
INSERT INTO `dictionary` VALUES (7, 'samplefrequency', '{\"title\":\"12.8KHZ\",\"content\":12800}');
INSERT INTO `dictionary` VALUES (8, 'samplefrequency', '{\"title\":\"25.6KHZ\",\"content\":25600}');
INSERT INTO `dictionary` VALUES (9, 'samplefrequency', '{\"title\":\"51.2KHZ\",\"content\":51200}');
INSERT INTO `dictionary` VALUES (10, 'samplefrequency', '{\"title\":\"128KHZ\",\"content\":128000}');
INSERT INTO `dictionary` VALUES (11, 'samplefrequency', '{\"title\":\"256KHZ\",\"content\":256000}');
INSERT INTO `dictionary` VALUES (12, 'analysisfrequency', '{\"title\":\"0.5HZ\",\"content\":0.5}');
INSERT INTO `dictionary` VALUES (13, 'analysisfrequency', '{\"title\":\"1HZ\",\"content\":1}');
INSERT INTO `dictionary` VALUES (14, 'analysisfrequency', '{\"title\":\"2HZ\",\"content\":2}');
INSERT INTO `dictionary` VALUES (15, 'analysisfrequency', '{\"title\":\"5HZ\",\"content\":5}');
INSERT INTO `dictionary` VALUES (16, 'analysisfrequency', '{\"title\":\"10HZ\",\"content\":10}');
INSERT INTO `dictionary` VALUES (17, 'analysisfrequency', '{\"title\":\"20HZ\",\"content\":20}');
INSERT INTO `dictionary` VALUES (18, 'analysisfrequency', '{\"title\":\"50HZ\",\"content\":50}');
INSERT INTO `dictionary` VALUES (19, 'analysisfrequency', '{\"title\":\"100HZ\",\"content\":100}');
INSERT INTO `dictionary` VALUES (20, 'analysisfrequency', '{\"title\":\"200HZ\",\"content\":200}');
INSERT INTO `dictionary` VALUES (21, 'analysisfrequency', '{\"title\":\"500HZ\",\"content\":500}');
INSERT INTO `dictionary` VALUES (22, 'analysisfrequency', '{\"title\":\"1KHZ\",\"content\":1000}');
INSERT INTO `dictionary` VALUES (23, 'analysisfrequency', '{\"title\":\"2KHZ\",\"content\":2000}');
INSERT INTO `dictionary` VALUES (24, 'analysisfrequency', '{\"title\":\"5KHZ\",\"content\":5000}');
INSERT INTO `dictionary` VALUES (25, 'analysisfrequency', '{\"title\":\"10KHZ\",\"content\":10000}');
INSERT INTO `dictionary` VALUES (26, 'analysisfrequency', '{\"title\":\"20KHZ\",\"content\":20000}');
INSERT INTO `dictionary` VALUES (27, 'analysisfrequency', '{\"title\":\"50KHZ\",\"content\":50000}');
INSERT INTO `dictionary` VALUES (28, 'analysisfrequency', '{\"title\":\"100KHZ\",\"content\":100000}');
INSERT INTO `dictionary` VALUES (29, 'collectionmethod', '连续');
INSERT INTO `dictionary` VALUES (30, 'collectionmethod', '示波');
INSERT INTO `dictionary` VALUES (31, 'collectionmethod', '瞬态');
INSERT INTO `dictionary` VALUES (32, 'collectionmethod', '触发连续');
INSERT INTO `dictionary` VALUES (46, 'engineeringunit', 'v');
INSERT INTO `dictionary` VALUES (48, 'engineeringunit', 'με');
INSERT INTO `dictionary` VALUES (49, 'engineeringunit', 'g');
INSERT INTO `dictionary` VALUES (50, 'engineeringunit', 'm/s^2');
INSERT INTO `dictionary` VALUES (51, 'engineeringunit', 'cm/s^2');
INSERT INTO `dictionary` VALUES (52, 'engineeringunit', 'mm/s^2');
INSERT INTO `dictionary` VALUES (53, 'engineeringunit', 'm/s');
INSERT INTO `dictionary` VALUES (54, 'engineeringunit', 'cm/s');
INSERT INTO `dictionary` VALUES (55, 'engineeringunit', 'mm/s');
INSERT INTO `dictionary` VALUES (56, 'engineeringunit', 'm');
INSERT INTO `dictionary` VALUES (57, 'engineeringunit', 'cm');
INSERT INTO `dictionary` VALUES (58, 'engineeringunit', 'mm');
INSERT INTO `dictionary` VALUES (59, 'engineeringunit', 'μm');
INSERT INTO `dictionary` VALUES (60, 'engineeringunit', '℃');
INSERT INTO `dictionary` VALUES (61, 'engineeringunit', '℉');
INSERT INTO `dictionary` VALUES (62, 'engineeringunit', 'N');
INSERT INTO `dictionary` VALUES (63, 'engineeringunit', 'Pa');
INSERT INTO `dictionary` VALUES (64, 'engineeringunit', 'KPa');
INSERT INTO `dictionary` VALUES (65, 'engineeringunit', 'MPa');
INSERT INTO `dictionary` VALUES (66, 'engineeringunit', 'kg');
INSERT INTO `dictionary` VALUES (67, 'engineeringunit', 'Hz');
INSERT INTO `dictionary` VALUES (68, 'engineeringunit', 'J');
INSERT INTO `dictionary` VALUES (69, 'engineeringunit', 'W');
INSERT INTO `dictionary` VALUES (70, 'engineeringunit', 'RPM');
INSERT INTO `dictionary` VALUES (71, 'engineeringunit', 'rad/s');
INSERT INTO `dictionary` VALUES (72, 'engineeringunit', 'rad');
INSERT INTO `dictionary` VALUES (73, 'engineeringunit', 'A');
INSERT INTO `dictionary` VALUES (75, 'collectionplan', '{\"planName\":\"平稳状态\",\"planIntro\":\"平稳状态下的采集\",\"planParaTitle\":[\"转速\"],\"planParaContent\":[[\"126hz\"],[\"126hz\"]]}');
INSERT INTO `dictionary` VALUES (76, 'windowtype', '矩形窗');
INSERT INTO `dictionary` VALUES (77, 'windowtype', '海宁窗');
INSERT INTO `dictionary` VALUES (78, 'windowtype', '平顶窗');
INSERT INTO `dictionary` VALUES (79, 'windowtype', '汉明窗');
INSERT INTO `dictionary` VALUES (80, 'windowtype', '力窗');
INSERT INTO `dictionary` VALUES (81, 'inputmethod', 'AC');
INSERT INTO `dictionary` VALUES (82, 'inputmethod', 'ICP');
INSERT INTO `dictionary` VALUES (83, 'collectionplan', '{\"planName\":\"上升状态\",\"planIntro\":\"上升状态下的采集\",\"planParaTitle\":[\"速度\",\"加速度\"],\"planParaContent\":[[\"30\",\"20\"],[\"20\",\"2\"]]}');
INSERT INTO `dictionary` VALUES (84, 'engineeringunit', 'test');
INSERT INTO `dictionary` VALUES (87, 'collectionplan', '{\"planName\":\"下降状态\",\"planIntro\":\"下降状态的采集\",\"planParaTitle\":[\"速度\",\"减速度\"],\"planParaContent\":[[\"20hz\",\"25hz\"],[\"36hz\",\"29hz\"],[\"39hz\",\"42hz\"]]}');
INSERT INTO `dictionary` VALUES (88, 'collectionpoint', '50');
INSERT INTO `dictionary` VALUES (89, 'collectionpoint', '100');
INSERT INTO `dictionary` VALUES (90, 'collectionpoint', '200');
INSERT INTO `dictionary` VALUES (91, 'collectionpoint', '400');
INSERT INTO `dictionary` VALUES (92, 'collectionpoint', '800');
INSERT INTO `dictionary` VALUES (93, 'collectionpoint', '1600');
INSERT INTO `dictionary` VALUES (94, 'collectionpoint', '3200');
INSERT INTO `dictionary` VALUES (95, 'collectionpoint', '6400');
INSERT INTO `dictionary` VALUES (96, 'collectionpoint', '8192');
INSERT INTO `dictionary` VALUES (97, 'collectionpoint', '25600');
INSERT INTO `dictionary` VALUES (98, 'collectionpoint', '51200');
INSERT INTO `dictionary` VALUES (99, 'collectionpoint', '102400');
INSERT INTO `dictionary` VALUES (100, 'triggermethod', '触发');
INSERT INTO `dictionary` VALUES (101, 'lines', '50');
INSERT INTO `dictionary` VALUES (102, 'lines', '100');
INSERT INTO `dictionary` VALUES (103, 'lines', '200');
INSERT INTO `dictionary` VALUES (104, 'lines', '400');
INSERT INTO `dictionary` VALUES (105, 'lines', '800');
INSERT INTO `dictionary` VALUES (106, 'lines', '1600');
INSERT INTO `dictionary` VALUES (107, 'lines', '3200');
INSERT INTO `dictionary` VALUES (108, 'lines', '6400');
INSERT INTO `dictionary` VALUES (109, 'lines', '12800');
INSERT INTO `dictionary` VALUES (110, 'lines', '25600');
INSERT INTO `dictionary` VALUES (111, 'test_name', 'test-value');
INSERT INTO `dictionary` VALUES (200, 'ge', 'geg');
INSERT INTO `dictionary` VALUES (203, 'hel', 'gegege');
INSERT INTO `dictionary` VALUES (204, 'hel', 'new_ge');

-- ----------------------------
-- Table structure for post
-- ----------------------------
DROP TABLE IF EXISTS `post`;
CREATE TABLE `post`  (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `post` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `post_id`(`id`) USING BTREE,
  UNIQUE INDEX `post`(`post`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 3 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of post
-- ----------------------------
INSERT INTO `post` VALUES (1, '普通用户');
INSERT INTO `post` VALUES (2, '管理员');

-- ----------------------------
-- Table structure for product
-- ----------------------------
DROP TABLE IF EXISTS `product`;
CREATE TABLE `product`  (
  `product_id` int(11) NOT NULL AUTO_INCREMENT,
  `product_name` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `product_describe` text CHARACTER SET utf8 COLLATE utf8_general_ci NULL,
  PRIMARY KEY (`product_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 8 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of product
-- ----------------------------
INSERT INTO `product` VALUES (1, '飞附机匣-s10a', '产品细节');
INSERT INTO `product` VALUES (2, '飞附机匣-s10b', '产品细节');
INSERT INTO `product` VALUES (3, '飞附机匣-s10c', '产品细节\n2000');
INSERT INTO `product` VALUES (6, 's11', '时间：2022/11/29\n地点：哈尔滨\n公司：东汇\n特殊：');
INSERT INTO `product` VALUES (7, 's12', '描述：\n时间：2022/11/30');

-- ----------------------------
-- Table structure for productwithproject
-- ----------------------------
DROP TABLE IF EXISTS `productwithproject`;
CREATE TABLE `productwithproject`  (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `productId` int(11) NOT NULL,
  `projectId` int(11) NOT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 19 CHARACTER SET = latin1 COLLATE = latin1_swedish_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of productwithproject
-- ----------------------------
INSERT INTO `productwithproject` VALUES (1, 2, 6);
INSERT INTO `productwithproject` VALUES (2, 1, 7);
INSERT INTO `productwithproject` VALUES (3, 2, 8);
INSERT INTO `productwithproject` VALUES (4, 2, 9);
INSERT INTO `productwithproject` VALUES (5, 2, 10);
INSERT INTO `productwithproject` VALUES (6, 2, 11);
INSERT INTO `productwithproject` VALUES (7, 2, 12);
INSERT INTO `productwithproject` VALUES (8, 2, 13);
INSERT INTO `productwithproject` VALUES (9, 2, 14);
INSERT INTO `productwithproject` VALUES (10, 2, 15);
INSERT INTO `productwithproject` VALUES (11, 2, 16);
INSERT INTO `productwithproject` VALUES (12, 2, 17);
INSERT INTO `productwithproject` VALUES (13, 2, 18);
INSERT INTO `productwithproject` VALUES (14, 3, 19);
INSERT INTO `productwithproject` VALUES (15, 20, 1);
INSERT INTO `productwithproject` VALUES (16, 6, 21);
INSERT INTO `productwithproject` VALUES (17, 6, 22);
INSERT INTO `productwithproject` VALUES (18, 7, 23);

-- ----------------------------
-- Table structure for project
-- ----------------------------
DROP TABLE IF EXISTS `project`;
CREATE TABLE `project`  (
  `id` int(11) NOT NULL AUTO_INCREMENT COMMENT '项目id',
  `projectName` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL COMMENT '项目名称',
  `projectCreateTime` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '项目创建时间',
  `projectUpdateTime` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '项目更新时间',
  `userId` int(11) NULL DEFAULT NULL COMMENT '用户id',
  `projectParameterId` int(11) NULL DEFAULT NULL COMMENT '项目参数id',
  `projectStatus` int(11) NULL DEFAULT NULL COMMENT ' 1默认状态 2 正在使用 3 删除',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 24 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of project
-- ----------------------------
INSERT INTO `project` VALUES (6, 'JJ', '2022-11-23 09:58:52', '2022-11-23 21:30:05', 21, -1, 20000);
INSERT INTO `project` VALUES (7, 'JJ2', '2022-11-23 10:01:32', '2022-11-27 23:53:02', 21, -1, 20000);
INSERT INTO `project` VALUES (8, 'JJ3', '2022-11-23 10:01:44', '2022-11-27 23:07:38', 21, -1, 20000);
INSERT INTO `project` VALUES (9, 'JJ3', '2022-11-23 10:02:41', '2022-11-27 23:28:49', 21, -1, 20000);
INSERT INTO `project` VALUES (10, 'JJ4', '2022-11-23 10:02:52', '2022-11-27 19:29:02', 21, -1, 20000);
INSERT INTO `project` VALUES (11, 'JJ5', '2022-11-23 10:06:12', '2022-11-23 21:29:53', 21, -1, 20000);
INSERT INTO `project` VALUES (12, 'JJ6', '2022-11-23 10:22:30', '2022-11-23 21:34:18', 21, -1, 10000);
INSERT INTO `project` VALUES (13, 'JJ7', '2022-11-23 14:57:40', '2022-11-23 21:29:12', 21, -1, 20000);
INSERT INTO `project` VALUES (14, 'tese1', '2022-11-23 21:33:47', '2022-11-23 21:33:47', 21, -1, 20000);
INSERT INTO `project` VALUES (15, 'test3', '2022-11-24 13:52:18', '2022-11-24 13:52:18', 21, -1, 20000);
INSERT INTO `project` VALUES (16, 'test2', '2022-11-27 00:27:17', '2022-11-27 00:27:17', 21, -1, 20000);
INSERT INTO `project` VALUES (17, '123', '2022-11-27 19:29:23', '2022-11-27 19:29:23', 21, -1, 20000);
INSERT INTO `project` VALUES (18, '1234', '2022-11-27 19:49:34', '2022-11-27 19:49:51', 21, -1, 20000);
INSERT INTO `project` VALUES (19, 'test33', '2022-11-29 13:02:32', '2022-11-29 13:02:32', 21, -1, 20000);
INSERT INTO `project` VALUES (20, 'test11', '2022-11-29 19:24:18', '2022-11-29 19:24:18', 21, -1, 20000);
INSERT INTO `project` VALUES (21, '1111', '2022-11-29 19:31:01', '2022-11-29 19:31:14', 21, -1, 20000);
INSERT INTO `project` VALUES (22, 'test通道', '2022-11-29 22:01:45', '2022-11-29 22:01:45', 21, -1, 20000);
INSERT INTO `project` VALUES (23, 'test12', '2022-11-30 09:39:18', '2022-11-30 09:39:39', 21, -1, 20000);

-- ----------------------------
-- Table structure for single_signal
-- ----------------------------
DROP TABLE IF EXISTS `single_signal`;
CREATE TABLE `single_signal`  (
  `id` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL COMMENT '单通道信号id',
  `channelId` int(11) NULL DEFAULT NULL COMMENT '用来保存该通道的参数的记录的id',
  `sumSignalId` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '用来保存该批次信号的共同id',
  `signalStatus` int(11) NULL DEFAULT NULL COMMENT '信号的状态',
  `dataUrl` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '信号的保存路径',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of single_signal
-- ----------------------------
INSERT INTO `single_signal` VALUES ('01df1cc5-f805-4e8a-a21c-e265c2a3a355', 3, 'aeaeb372-8789-4536-b79d-9c30ec02873c', 1, 'D:/QtCollectionData/eead8985-216f-48e2-a9e1-3133f9624db1-3.txt');
INSERT INTO `single_signal` VALUES ('0367dbf2-2960-4188-9ea3-4e1a991a0686', 0, 'ceb17ce8-4a4a-4cba-acd2-da9241db131d', 1, 'D:/QtCollectionData/e511729d-355e-4d0b-b442-7ee2a88e8e41-0.txt');
INSERT INTO `single_signal` VALUES ('04d3d639-021f-444d-a05e-19f228a75e90', 0, '2aba7f93-01c3-4686-9a9f-f0366dadfba5', 1, 'D:/QtCollectionData/05daad82-a75c-4227-992b-1f539ab11d17-0.txt');
INSERT INTO `single_signal` VALUES ('073730be-910e-4fc6-8e7b-db4eaed16128', 0, '78729cdd-44e5-4a8d-ba2f-372a4e0b940a', 1, 'D:/QtCollectionData/a6fbf1dd-d77a-4bf5-913b-f208ca24e037-0.txt');
INSERT INTO `single_signal` VALUES ('0f863e54-4fe5-4fab-a4b2-2e5028b32e60', 0, '22c1d7d9-7893-424d-8dd2-5ca6710e3658', 1, 'D:/QtCollectionData/435bde0f-ada9-4e32-b308-414ba8ca7e15-0.txt');
INSERT INTO `single_signal` VALUES ('109759bd-fbb7-4c53-bcd9-815a4b163b54', 2, '68d9e8e6-cb7e-43a6-9451-c47fbe33cfb2', 1, 'D:/QtCollectionData/3fcaba36-3cf0-45a6-ae0c-34b81274cc2d-2.txt');
INSERT INTO `single_signal` VALUES ('10b7aea1-4a69-4323-a003-ef9eb6e157e5', 2, '78729cdd-44e5-4a8d-ba2f-372a4e0b940a', 1, 'D:/QtCollectionData/2717d5b5-fd4e-4271-90b1-d712bf817c64-2.txt');
INSERT INTO `single_signal` VALUES ('119748b9-4164-40c3-9731-0f230169a275', 3, '2901aba2-5a7c-4d4e-850a-2289bb23ad6a', 1, 'D:/QtCollectionData/cc66ce66-f98c-4334-b881-2527d6cc4cac-3.txt');
INSERT INTO `single_signal` VALUES ('133f46c7-c936-410e-92de-5d3edb4ccedd', 1, '4fe1af0f-6697-4097-affc-9254720305b9', 1, 'D:/QtCollectionData/bd0800d5-c9ec-453a-bfa1-bb56fc20e9f1-1.txt');
INSERT INTO `single_signal` VALUES ('1374b038-848a-4ffb-980a-72e472836ba6', 1, 'c6199916-b57f-4c8d-a0ca-d3a69dc64fdf', 1, 'D:/QtCollectionData/b0f3d07d-7c12-4c3e-bac8-b7834bfb1ffe-1.txt');
INSERT INTO `single_signal` VALUES ('13c54e1a-b79e-45e5-9317-e2b11721eff9', 1, '3da31c81-3c89-4b8b-b4fe-cadecea1fb38', 1, 'D:/QtCollectionData/5fb0186c-6590-466e-842e-e1aab2b927a4-1.txt');
INSERT INTO `single_signal` VALUES ('1e355925-c292-4b9c-9867-106fd2e31656', 0, '2901aba2-5a7c-4d4e-850a-2289bb23ad6a', 1, 'D:/QtCollectionData/c0c4abb9-faf3-43c1-82f3-e0c61780cd75-0.txt');
INSERT INTO `single_signal` VALUES ('214fa91b-4b31-4c9a-bb6d-f6fa7076ac04', 2, '51c6b2cb-bb9b-4564-a061-5933ddbce505', 1, 'D:/QtCollectionData/69d60f7c-a952-4ed4-86f9-d93bb2595708-2.txt');
INSERT INTO `single_signal` VALUES ('2377485f-348c-4dcc-8ec0-e87f48f3026c', 2, '77b005f8-d63d-4c04-9fa9-449323909156', 1, 'D:/QtCollectionData/a16beb71-36e6-4249-a70b-7a9a26dd840b-2.txt');
INSERT INTO `single_signal` VALUES ('243f5041-195c-4fe5-894f-c4bd43d8c6cb', 0, 'e8e00907-2934-4c13-9a92-e8653009e404', 1, 'D:/QtCollectionData/fd5f4a88-233b-4e4c-8bd8-fc007595fd17-0.txt');
INSERT INTO `single_signal` VALUES ('24bc8c3b-8cd7-49d8-bb6c-4ceedcf513c7', 3, '77b005f8-d63d-4c04-9fa9-449323909156', 1, 'D:/QtCollectionData/505ee44d-750c-4ae2-a4c0-6d2eac1e3428-3.txt');
INSERT INTO `single_signal` VALUES ('250cec92-3ba2-447d-95a8-8c6f6e5ac826', 3, 'dff25bb8-cc06-4b70-99cf-7223e45cc023', 1, 'D:/QtCollectionData/10626983-1c30-4a28-9b56-9c5d890d246c-3.txt');
INSERT INTO `single_signal` VALUES ('310cb81b-ab27-4874-9224-57f339a8a6f6', 2, 'dff25bb8-cc06-4b70-99cf-7223e45cc023', 1, 'D:/QtCollectionData/50a1f581-5a77-4e5d-89c6-2ba568ac1842-2.txt');
INSERT INTO `single_signal` VALUES ('33e01421-80de-4fb4-9fc4-28d519be27d2', 1, '5aa81bcf-1f47-43d2-be5c-538dbad5fdc1', 1, 'D:/QtCollectionData/3ed056b8-01ee-4da6-a272-5a804fee6f8e-1.txt');
INSERT INTO `single_signal` VALUES ('34095a8e-05b6-4534-ae07-98d21e56adbb', 3, '8d32f753-04f2-4419-90d6-b8990642445c', 1, 'D:/QtCollectionData/4b6327aa-db16-405e-9cc8-3f3bcf19e092-3.txt');
INSERT INTO `single_signal` VALUES ('36aaa627-9af6-465f-a993-a6e5c8da596f', 1, 'cd43feed-55df-45ab-ac74-8f0126ace059', 1, 'D:/QtCollectionData/0fa0583d-d074-45f4-89da-95bbe2d645f2-1.txt');
INSERT INTO `single_signal` VALUES ('38f5ea9f-249c-4b4c-a4a2-4741dc74fbe8', 0, '000f6f8c-662c-4aa2-b4c4-af7a05745db5', 1, 'D:/QtCollectionData/79972942-1ba2-40a0-8021-57780becd46f-0.txt');
INSERT INTO `single_signal` VALUES ('3a50cb6c-8660-43ec-a611-4fa52895ad1c', 1, 'aeaeb372-8789-4536-b79d-9c30ec02873c', 1, 'D:/QtCollectionData/006f6a90-f4a3-42d0-95ce-624ba07d3eaa-1.txt');
INSERT INTO `single_signal` VALUES ('3d4954ab-7e41-4914-9a09-6f8018b8e5a9', 2, '4fe1af0f-6697-4097-affc-9254720305b9', 1, 'D:/QtCollectionData/44b836ad-7f8d-4b7f-954c-0c30537e2afa-2.txt');
INSERT INTO `single_signal` VALUES ('3da4f7f8-fa9f-4f77-8054-5da65a77fb28', 1, '2901aba2-5a7c-4d4e-850a-2289bb23ad6a', 1, 'D:/QtCollectionData/bccdb012-951e-44b1-a69d-d0c2c98b807e-1.txt');
INSERT INTO `single_signal` VALUES ('3e0ec9b1-6b54-4385-8d7c-cd44bd94a9fd', 2, 'c7c53d39-5cb1-4c73-87ef-b5294fc32419', 1, 'D:/QtCollectionData/c6adbd2a-9288-4ab1-aea6-2cefb43cfce4-2.txt');
INSERT INTO `single_signal` VALUES ('3e17ca77-8171-405e-9a1d-a942eec2b338', 2, '2901aba2-5a7c-4d4e-850a-2289bb23ad6a', 1, 'D:/QtCollectionData/e75e7a3a-7a1a-41a3-a784-ce12d073767c-2.txt');
INSERT INTO `single_signal` VALUES ('4275d5dc-3f28-4c2d-81c7-0c4a00554523', 2, '2aba7f93-01c3-4686-9a9f-f0366dadfba5', 1, 'D:/QtCollectionData/20936884-0567-4d10-949a-b8cd4b50f005-2.txt');
INSERT INTO `single_signal` VALUES ('47c8b4e5-2cd2-4d30-8406-7ae126bff31c', 1, '77b005f8-d63d-4c04-9fa9-449323909156', 1, 'D:/QtCollectionData/bae100ed-de05-4571-90ad-d0c259691704-1.txt');
INSERT INTO `single_signal` VALUES ('498c4136-ac53-4a35-8282-60a12a36805f', 3, 'bee28d6b-e667-43ec-ac3f-5a3814406a95', 1, 'D:/QtCollectionData/2f273734-03ee-4533-b546-a2a968b223f1-3.txt');
INSERT INTO `single_signal` VALUES ('4c4b062b-c850-41aa-a124-61b4866cf99c', 3, 'cd43feed-55df-45ab-ac74-8f0126ace059', 1, 'D:/QtCollectionData/4e700f30-80e4-419c-b821-307339e6f6f0-3.txt');
INSERT INTO `single_signal` VALUES ('52b8e234-c7c6-4e10-80c1-b784790e1dc3', 3, '68d9e8e6-cb7e-43a6-9451-c47fbe33cfb2', 1, 'D:/QtCollectionData/2ad94abb-442d-43db-91ca-d90cb33787cf-3.txt');
INSERT INTO `single_signal` VALUES ('5bcb3eba-a7ae-4b56-982b-b0b8b34755d3', 2, 'e37965d5-81ae-4ca1-bde9-bda3664cdba9', 1, 'D:/QtCollectionData/f2d94d40-ff23-4ce6-be68-fe8d7dd3b295-2.txt');
INSERT INTO `single_signal` VALUES ('5f86c70c-d381-42a2-a2ea-1f18d79cb62d', 1, '78729cdd-44e5-4a8d-ba2f-372a4e0b940a', 1, 'D:/QtCollectionData/2f58654b-d971-447b-838f-25d3d0dcfee4-1.txt');
INSERT INTO `single_signal` VALUES ('5fda2d1e-bdae-47b2-95e4-d5d580df397a', 1, '51c6b2cb-bb9b-4564-a061-5933ddbce505', 1, 'D:/QtCollectionData/d45bf191-b9bf-4e63-9ea1-72f8c06f3e6c-1.txt');
INSERT INTO `single_signal` VALUES ('60b62d86-95a6-4744-8fb4-c19fb5decf2d', 1, 'ceb17ce8-4a4a-4cba-acd2-da9241db131d', 1, 'D:/QtCollectionData/9a67cff2-ed39-48e8-a997-8511fad5ada8-1.txt');
INSERT INTO `single_signal` VALUES ('61725219-f075-4d9b-bb74-7d43997bcd14', 0, '63cada82-abdb-4d80-b65a-2924f738bcb0', 1, 'D:/QtCollectionData/4559d76f-b6a9-4f11-98ad-6fc473d7b994-0.txt');
INSERT INTO `single_signal` VALUES ('640b0783-b133-4260-9c14-45b173219895', 0, 'c6199916-b57f-4c8d-a0ca-d3a69dc64fdf', 1, 'D:/QtCollectionData/e69c24f1-62c4-417f-9dc9-f1429e850f47-0.txt');
INSERT INTO `single_signal` VALUES ('65e5fb03-a459-4954-b053-655821ba4d7b', 1, 'da444cd9-4f6b-4f3f-a00c-426c0cf26eae', 1, 'D:/QtCollectionData/e8ee69cd-307e-4527-8230-58fe12706fcc-1.txt');
INSERT INTO `single_signal` VALUES ('67383683-9be4-404b-a8ac-c16f90a2a981', 1, 'e8e00907-2934-4c13-9a92-e8653009e404', 1, 'D:/QtCollectionData/05e6dafc-7e80-471c-98ad-1a7dc8d45778-1.txt');
INSERT INTO `single_signal` VALUES ('68a21613-e8b8-461a-8825-340f1aaf3159', 1, 'dff25bb8-cc06-4b70-99cf-7223e45cc023', 1, 'D:/QtCollectionData/acb7b170-9e73-45a6-9658-42212784ed90-1.txt');
INSERT INTO `single_signal` VALUES ('691bdd2c-f7be-48ee-a01f-6d15c9f92ccc', 3, 'ceb17ce8-4a4a-4cba-acd2-da9241db131d', 1, 'D:/QtCollectionData/6fa5bfec-0ac2-4600-a83e-eb11d573a4b0-3.txt');
INSERT INTO `single_signal` VALUES ('701e39b7-ece9-470b-8b58-3ccd842a5b6e', 3, '2aba7f93-01c3-4686-9a9f-f0366dadfba5', 1, 'D:/QtCollectionData/08329e26-4861-474c-bfbd-65798acaf14a-3.txt');
INSERT INTO `single_signal` VALUES ('71778d54-5c37-44f2-ba88-3c1b26c82af0', 2, '8d32f753-04f2-4419-90d6-b8990642445c', 1, 'D:/QtCollectionData/82246232-67f6-4f25-b121-313287e65c5f-2.txt');
INSERT INTO `single_signal` VALUES ('7300f96a-92da-4005-9ab0-cb5bb7fa6850', 1, 'e37965d5-81ae-4ca1-bde9-bda3664cdba9', 1, 'D:/QtCollectionData/dd89e9f2-694f-46c4-ab83-1de06e40354e-1.txt');
INSERT INTO `single_signal` VALUES ('74801d70-c053-4123-9dea-09b436c8bd41', 0, 'da444cd9-4f6b-4f3f-a00c-426c0cf26eae', 1, 'D:/QtCollectionData/eea5bf69-1561-4c8a-a502-e203a9c3dd37-0.txt');
INSERT INTO `single_signal` VALUES ('7d037972-f811-4f2e-bd39-1515428e3c4a', 1, '8d32f753-04f2-4419-90d6-b8990642445c', 1, 'D:/QtCollectionData/6009f727-54e5-4f36-93ed-a89cc3e1b2a2-1.txt');
INSERT INTO `single_signal` VALUES ('7e676e24-36e3-478a-9fcd-f8e8b16af102', 1, '000f6f8c-662c-4aa2-b4c4-af7a05745db5', 1, 'D:/QtCollectionData/03d6efe8-c902-4803-b2d0-71a29d8793e2-1.txt');
INSERT INTO `single_signal` VALUES ('7ea8507f-30cb-45bd-9b17-d9a02596c98d', 0, 'aeaeb372-8789-4536-b79d-9c30ec02873c', 1, 'D:/QtCollectionData/dca5a121-e12a-4c0f-bf25-2f96e70a38ac-0.txt');
INSERT INTO `single_signal` VALUES ('817928ab-f45d-49dd-ad4b-d28eec775261', 0, 'dff25bb8-cc06-4b70-99cf-7223e45cc023', 1, 'D:/QtCollectionData/636462e7-1b8e-487c-96d7-a99bfe4481a4-0.txt');
INSERT INTO `single_signal` VALUES ('83239539-3b69-45b1-8bb1-44dd1ee047dd', 0, 'd23e7620-8923-4600-8e65-9d315d87b6db', 1, 'D:/QtCollectionData/614c014d-1afc-40a5-a7d8-b0a8d9024844-0.txt');
INSERT INTO `single_signal` VALUES ('83865acd-f2ae-4fa8-8b3d-1bffc0bed627', 1, 'cc0a5f1b-a2cc-4be7-b888-e48881b28fdf', 1, 'D:/QtCollectionData/381f5e55-6fd1-47ed-9832-c64c35c998ae-1.txt');
INSERT INTO `single_signal` VALUES ('83a5ce19-0f88-4ebf-8a25-73beb6b032d7', 0, 'e37965d5-81ae-4ca1-bde9-bda3664cdba9', 1, 'D:/QtCollectionData/2b7f10c7-2157-430c-b795-c98e8dc2e3f1-0.txt');
INSERT INTO `single_signal` VALUES ('8432031b-e4b0-45f6-b1fd-d3f5b4ac637a', 3, '5aa81bcf-1f47-43d2-be5c-538dbad5fdc1', 1, 'D:/QtCollectionData/49db84e8-62aa-40ef-8dfd-de687e29f9f6-3.txt');
INSERT INTO `single_signal` VALUES ('847a48b0-a277-4dc5-a09c-1f904f15a66f', 3, 'c7c53d39-5cb1-4c73-87ef-b5294fc32419', 1, 'D:/QtCollectionData/4b5c5cba-f0a0-4dfa-b322-3c56f207c5b9-3.txt');
INSERT INTO `single_signal` VALUES ('84bca46c-d321-4af9-8c08-a41117753d35', 3, '000f6f8c-662c-4aa2-b4c4-af7a05745db5', 1, 'D:/QtCollectionData/d45afcd2-d88d-4a42-92f5-8b7b2c9a71a1-3.txt');
INSERT INTO `single_signal` VALUES ('8668113b-6b0a-4a95-8ec9-e4c027429bb9', 0, 'c7c53d39-5cb1-4c73-87ef-b5294fc32419', 1, 'D:/QtCollectionData/14b3595d-69ac-460e-9f4c-8bb9046619d5-0.txt');
INSERT INTO `single_signal` VALUES ('8d68414b-ac55-49bb-b215-e2a6d0a3a503', 0, 'f0e316f8-885b-47ac-92f4-9448ce8b1fcd', 1, 'D:/QtCollectionData/60e1443c-cd67-4621-bc7a-89eaa69aad8f-0.txt');
INSERT INTO `single_signal` VALUES ('8ff93462-5114-4d17-8bf6-d9db42624bdc', 1, 'f0e316f8-885b-47ac-92f4-9448ce8b1fcd', 1, 'D:/QtCollectionData/cc409cff-8812-42f6-be0a-3992d7e1cadb-1.txt');
INSERT INTO `single_signal` VALUES ('90194ff5-7abd-41b5-b737-144e9ad54335', 2, 'cc0a5f1b-a2cc-4be7-b888-e48881b28fdf', 1, 'D:/QtCollectionData/f730e8d1-768d-446a-b52a-9b537b2997c2-2.txt');
INSERT INTO `single_signal` VALUES ('914373e7-bb23-40ac-b4d9-4a3ec16662e0', 3, '4fe1af0f-6697-4097-affc-9254720305b9', 1, 'D:/QtCollectionData/ae0f4819-6584-4b28-ade5-ca22ba8b931c-3.txt');
INSERT INTO `single_signal` VALUES ('92992fa1-bb4d-4569-9d98-c9b362554d7c', 2, '63cada82-abdb-4d80-b65a-2924f738bcb0', 1, 'D:/QtCollectionData/902648a7-ee86-4400-921c-3894135b7a90-2.txt');
INSERT INTO `single_signal` VALUES ('9324c47f-4df3-4525-b662-419cde53c0db', 3, '7f919baf-c085-4729-b5b0-27b5c39022d0', 1, 'D:/QtCollectionData/447c66af-eb6c-47a4-9514-4a56019888cf-3.txt');
INSERT INTO `single_signal` VALUES ('9392719f-8c0d-4d1d-b29f-3e3883e2fca9', 3, 'f0e316f8-885b-47ac-92f4-9448ce8b1fcd', 1, 'D:/QtCollectionData/c8d5c5ab-d1d3-4d2d-91c2-8c260f01e281-3.txt');
INSERT INTO `single_signal` VALUES ('97d21215-fe72-4927-aa34-194e70d6bec5', 2, '22c1d7d9-7893-424d-8dd2-5ca6710e3658', 1, 'D:/QtCollectionData/f6b309dd-a0f9-4c38-a0ec-8bcebd659860-2.txt');
INSERT INTO `single_signal` VALUES ('97fd2cf9-b1d3-4b15-a59b-ac043de64d06', 0, 'd6acfe41-78de-4195-9b6f-3f1a1c030086', 1, 'D:/QtCollectionData/e6c204a1-e706-4de3-a13c-17291da325f4-0.txt');
INSERT INTO `single_signal` VALUES ('98b0e8e6-8bdf-49b4-99c8-db3641670a02', 2, '000f6f8c-662c-4aa2-b4c4-af7a05745db5', 1, 'D:/QtCollectionData/169dc8c9-1a7f-4fff-9d11-0795d3df5704-2.txt');
INSERT INTO `single_signal` VALUES ('99891223-f4d3-42b8-870e-5a76d2be7bb2', 3, 'cc0a5f1b-a2cc-4be7-b888-e48881b28fdf', 1, 'D:/QtCollectionData/73d8927b-3414-4aec-88a5-26ab2045caf4-3.txt');
INSERT INTO `single_signal` VALUES ('99bacb31-567a-4e48-80e5-23898c0f7fd5', 1, 'bee28d6b-e667-43ec-ac3f-5a3814406a95', 1, 'D:/QtCollectionData/538a5249-9311-4fd1-a3d8-f58813c3713b-1.txt');
INSERT INTO `single_signal` VALUES ('9b32828f-5ef4-4381-8174-0509836d00c4', 3, 'd23e7620-8923-4600-8e65-9d315d87b6db', 1, 'D:/QtCollectionData/34cf5adb-7fff-4f49-a4d3-dbd93073573d-3.txt');
INSERT INTO `single_signal` VALUES ('9cf3d036-e66b-4f2d-8a06-d8f1bfe8b98f', 2, 'c6199916-b57f-4c8d-a0ca-d3a69dc64fdf', 1, 'D:/QtCollectionData/d0db8932-1d1a-422d-bd25-5c7f34b8ee37-2.txt');
INSERT INTO `single_signal` VALUES ('9ef29130-0fd0-4d71-b0f5-204068f5dbf4', 2, 'aeaeb372-8789-4536-b79d-9c30ec02873c', 1, 'D:/QtCollectionData/fea2e63f-cf95-4166-bb1a-bd6974682b7f-2.txt');
INSERT INTO `single_signal` VALUES ('a1469cad-0e17-458b-a537-75041c8e6b82', 2, 'f0e316f8-885b-47ac-92f4-9448ce8b1fcd', 1, 'D:/QtCollectionData/07f98e4e-e737-45e4-a9cd-474d3f227bfa-2.txt');
INSERT INTO `single_signal` VALUES ('a5c15030-d193-4bdb-af92-6a94aba6fdc5', 2, 'da444cd9-4f6b-4f3f-a00c-426c0cf26eae', 1, 'D:/QtCollectionData/e98d103d-e4d9-4714-8a33-93ec11abaea5-2.txt');
INSERT INTO `single_signal` VALUES ('a74ed130-3ced-4387-a6a1-b4e4589011e4', 3, 'c6199916-b57f-4c8d-a0ca-d3a69dc64fdf', 1, 'D:/QtCollectionData/9a80578a-0265-4a70-9717-7234a51a56b0-3.txt');
INSERT INTO `single_signal` VALUES ('ab6662eb-70ac-4631-ba1d-4fb72b02b6a6', 1, '63cada82-abdb-4d80-b65a-2924f738bcb0', 1, 'D:/QtCollectionData/4fe57bc3-90dd-4fc1-8e11-72ead96849bd-1.txt');
INSERT INTO `single_signal` VALUES ('adassaasd', 1, 'test', NULL, 'D:\\Signal_Analysis\\normalBangNormal-1.txt');
INSERT INTO `single_signal` VALUES ('ae7eb730-de67-41ed-963e-68c19d250921', 2, '7f919baf-c085-4729-b5b0-27b5c39022d0', 1, 'D:/QtCollectionData/2a0f7b47-33a5-48ed-ab00-9f5e684d58dc-2.txt');
INSERT INTO `single_signal` VALUES ('af197aab-95c7-4204-b481-3669b2adf944', 1, 'd23e7620-8923-4600-8e65-9d315d87b6db', 1, 'D:/QtCollectionData/69f38421-4402-4b61-9593-b585eb58cd92-1.txt');
INSERT INTO `single_signal` VALUES ('asdasd', 0, 'test', NULL, 'D:\\Signal_Analysis\\normalBangNormal-0.txt');
INSERT INTO `single_signal` VALUES ('b14c42e9-c982-4707-8a44-2f4b757ab44f', 0, '7f919baf-c085-4729-b5b0-27b5c39022d0', 1, 'D:/QtCollectionData/f8add7ff-a316-4856-814f-84610549fb8b-0.txt');
INSERT INTO `single_signal` VALUES ('b2ac8b26-2611-4169-ac56-5e51a1b71850', 3, '63cada82-abdb-4d80-b65a-2924f738bcb0', 1, 'D:/QtCollectionData/cfe42395-b67c-47fc-839e-d0cb039263ed-3.txt');
INSERT INTO `single_signal` VALUES ('b2ae769f-126e-4110-ab66-0bdd32a0bd53', 0, '68d9e8e6-cb7e-43a6-9451-c47fbe33cfb2', 1, 'D:/QtCollectionData/5a69eec9-a86f-4bfe-b5b6-5424fb4e68dd-0.txt');
INSERT INTO `single_signal` VALUES ('b4e0cce4-d5f6-4753-95ff-1512a657ec2a', 1, 'd6acfe41-78de-4195-9b6f-3f1a1c030086', 1, 'D:/QtCollectionData/5ad15078-644c-4d11-9558-1d29d49e97e6-1.txt');
INSERT INTO `single_signal` VALUES ('b56e91d6-fdd3-4528-9401-31124918183d', 2, 'bee28d6b-e667-43ec-ac3f-5a3814406a95', 1, 'D:/QtCollectionData/de6e09e2-05c8-42f8-bfcf-844883ce2e82-2.txt');
INSERT INTO `single_signal` VALUES ('b5c56d84-8015-40e4-9d71-9d591540a595', 3, '22c1d7d9-7893-424d-8dd2-5ca6710e3658', 1, 'D:/QtCollectionData/e286f9ff-a2ad-46f8-bca6-4a500b29ec83-3.txt');
INSERT INTO `single_signal` VALUES ('b6a5d9f8-fd6e-4cb0-812b-ae9bec295320', 2, 'e8e00907-2934-4c13-9a92-e8653009e404', 1, 'D:/QtCollectionData/559d2ac8-fcf8-4e1d-b663-609efc2f1426-2.txt');
INSERT INTO `single_signal` VALUES ('b77c1a99-0287-42a5-a5c0-6249d31b55d7', 2, '5aa81bcf-1f47-43d2-be5c-538dbad5fdc1', 1, 'D:/QtCollectionData/8e571680-09ca-49fd-936e-840a1431d2c6-2.txt');
INSERT INTO `single_signal` VALUES ('ba4e0102-000b-4b35-ba37-06aa9ce85d21', 3, '78729cdd-44e5-4a8d-ba2f-372a4e0b940a', 1, 'D:/QtCollectionData/8af6db0c-f90e-4f6d-83f3-58e76755f3da-3.txt');
INSERT INTO `single_signal` VALUES ('be5aac15-30f5-4379-b7f4-f781555d9363', 0, '77b005f8-d63d-4c04-9fa9-449323909156', 1, 'D:/QtCollectionData/cbe712a6-c6a9-43e2-a1a2-4ddaa203c953-0.txt');
INSERT INTO `single_signal` VALUES ('c11efb0f-8545-4a57-abc0-8b9a85029573', 3, 'e37965d5-81ae-4ca1-bde9-bda3664cdba9', 1, 'D:/QtCollectionData/1b6897e8-e854-4bfc-a85e-4b6884641005-3.txt');
INSERT INTO `single_signal` VALUES ('c13b1bf8-b008-44cd-81e0-b628776ff571', 2, 'd6acfe41-78de-4195-9b6f-3f1a1c030086', 1, 'D:/QtCollectionData/fbd59f9c-0ab7-48b9-8b47-1f032fd5bf1c-2.txt');
INSERT INTO `single_signal` VALUES ('c1ffeacf-23ea-4e04-a0c5-b03f6a9b48c7', 3, '51c6b2cb-bb9b-4564-a061-5933ddbce505', 1, 'D:/QtCollectionData/9aa93680-0c19-4140-843e-890edae13337-3.txt');
INSERT INTO `single_signal` VALUES ('cb3054bb-44be-494f-b1db-cea620ee5b62', 1, '2aba7f93-01c3-4686-9a9f-f0366dadfba5', 1, 'D:/QtCollectionData/b092c347-903b-4cb8-89a4-3a1589d2f185-1.txt');
INSERT INTO `single_signal` VALUES ('cf8dc22d-b66c-47d0-bcee-87335b9bc7a6', 1, '7f919baf-c085-4729-b5b0-27b5c39022d0', 1, 'D:/QtCollectionData/7548e843-cc1f-4572-b12c-00df24803ca2-1.txt');
INSERT INTO `single_signal` VALUES ('cff4b53f-207f-46d1-bbe6-1a5b253b1bf9', 0, '5aa81bcf-1f47-43d2-be5c-538dbad5fdc1', 1, 'D:/QtCollectionData/0eb37204-a816-4ebe-bc17-5ccc7d81a768-0.txt');
INSERT INTO `single_signal` VALUES ('d00146d5-4014-4d7a-bdc7-b740099f36f2', 2, 'ceb17ce8-4a4a-4cba-acd2-da9241db131d', 1, 'D:/QtCollectionData/bbe49a1b-9daf-4cff-be32-215aec6cae73-2.txt');
INSERT INTO `single_signal` VALUES ('d0362739-a6ec-40a1-b594-6268e119e2dd', 0, '3da31c81-3c89-4b8b-b4fe-cadecea1fb38', 1, 'D:/QtCollectionData/d0c88c52-b8ae-4a2c-97eb-3245b54ce0cc-0.txt');
INSERT INTO `single_signal` VALUES ('d06b0ba7-30b3-4da2-8abf-f186cfcb1b47', 3, '3da31c81-3c89-4b8b-b4fe-cadecea1fb38', 1, 'D:/QtCollectionData/c2131ca1-0f8f-429f-9a2a-312925b9bb9a-3.txt');
INSERT INTO `single_signal` VALUES ('d9f8598a-8353-4f2a-8ead-68cd8a8a6dbf', 0, 'cd43feed-55df-45ab-ac74-8f0126ace059', 1, 'D:/QtCollectionData/cdceef74-ca34-4986-b1bc-e86ea5dd24fa-0.txt');
INSERT INTO `single_signal` VALUES ('da8e1098-6cc8-4d3e-aeff-1637a8fb2074', 0, 'cc0a5f1b-a2cc-4be7-b888-e48881b28fdf', 1, 'D:/QtCollectionData/c44f33ea-796a-498f-b3ea-647c1e04064d-0.txt');
INSERT INTO `single_signal` VALUES ('daa85020-237f-4d3a-aded-75a8d6d217f9', 2, 'cd43feed-55df-45ab-ac74-8f0126ace059', 1, 'D:/QtCollectionData/a82212da-9de9-4188-9fea-c3aa5f94fba2-2.txt');
INSERT INTO `single_signal` VALUES ('dc0b5900-dd8f-47a2-b423-577eda912c34', 3, 'd6acfe41-78de-4195-9b6f-3f1a1c030086', 1, 'D:/QtCollectionData/7cc2e308-8e25-46af-aa72-091700a29152-3.txt');
INSERT INTO `single_signal` VALUES ('dd6d496c-ef97-4acf-9ea8-3ca8377acbb0', 3, 'da444cd9-4f6b-4f3f-a00c-426c0cf26eae', 1, 'D:/QtCollectionData/7f3ca4ec-74e3-4127-9708-520be25aed89-3.txt');
INSERT INTO `single_signal` VALUES ('dddd', 2, 'test', NULL, 'D:\\Signal_Analysis\\normalBangNormal-2.txt');
INSERT INTO `single_signal` VALUES ('de03a625-a9e1-4326-88fc-26336c9225e7', 0, 'bee28d6b-e667-43ec-ac3f-5a3814406a95', 1, 'D:/QtCollectionData/3dc3c70d-c5cf-4fa2-bce7-cc2f7d76c15b-0.txt');
INSERT INTO `single_signal` VALUES ('e2205794-7798-4cb1-a9ca-139caeeb9ba3', 1, 'c7c53d39-5cb1-4c73-87ef-b5294fc32419', 1, 'D:/QtCollectionData/3584f6be-f469-4034-bfc8-473e99f6dc80-1.txt');
INSERT INTO `single_signal` VALUES ('e533298b-08ea-4122-8520-d643ae747480', 2, 'd23e7620-8923-4600-8e65-9d315d87b6db', 1, 'D:/QtCollectionData/90bed477-2006-48f8-9852-3cbd7353374b-2.txt');
INSERT INTO `single_signal` VALUES ('e86dcdcb-bd65-4964-9a0f-b3d3cb8f7120', 2, '3da31c81-3c89-4b8b-b4fe-cadecea1fb38', 1, 'D:/QtCollectionData/cbeee02d-8513-4ce3-a84c-d20ae94eae58-2.txt');
INSERT INTO `single_signal` VALUES ('eb4e1455-d1ba-4289-a518-c81738485a2a', 0, '4fe1af0f-6697-4097-affc-9254720305b9', 1, 'D:/QtCollectionData/5b572223-7165-4ad3-8177-af50b3b873b0-0.txt');
INSERT INTO `single_signal` VALUES ('ee27e76b-5fe9-4594-8839-eb7f82490391', 1, '22c1d7d9-7893-424d-8dd2-5ca6710e3658', 1, 'D:/QtCollectionData/f1ec89af-548e-4c26-88d4-9610c86d7b7c-1.txt');
INSERT INTO `single_signal` VALUES ('f1880faa-84f0-4010-8e25-3a057c407bc1', 0, '51c6b2cb-bb9b-4564-a061-5933ddbce505', 1, 'D:/QtCollectionData/e8ab2406-005d-4975-bd9b-636fbc3e4ef5-0.txt');
INSERT INTO `single_signal` VALUES ('f57e96a1-d192-4e58-bcb0-c5f5f991ce5c', 3, 'e8e00907-2934-4c13-9a92-e8653009e404', 1, 'D:/QtCollectionData/b80b1ff0-253a-4ce4-9c79-92d3feebf2c5-3.txt');
INSERT INTO `single_signal` VALUES ('f9be8f28-4d97-4b32-80d1-2af66d346b66', 0, '8d32f753-04f2-4419-90d6-b8990642445c', 1, 'D:/QtCollectionData/7742dcc2-dc49-4f74-8280-a2dd706578cc-0.txt');
INSERT INTO `single_signal` VALUES ('faf66cde-baf1-46ac-8f4c-be43b6fe0a63', 1, '68d9e8e6-cb7e-43a6-9451-c47fbe33cfb2', 1, 'D:/QtCollectionData/b43eaf9e-02b1-4730-bd61-901da45b83f6-1.txt');
INSERT INTO `single_signal` VALUES ('xxxx', 3, 'test', NULL, 'D:\\Signal_Analysis\\normalBangNormal-3.txt');

-- ----------------------------
-- Table structure for sum_signal
-- ----------------------------
DROP TABLE IF EXISTS `sum_signal`;
CREATE TABLE `sum_signal`  (
  `id` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL COMMENT '该批次信号的公共id',
  `startTime` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '该批信号的开始采集时间',
  `endTime` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '该批信号的结束采集时间',
  `projectId` int(11) NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  INDEX `startTimeIndex`(`startTime`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sum_signal
-- ----------------------------
INSERT INTO `sum_signal` VALUES ('000f6f8c-662c-4aa2-b4c4-af7a05745db5', '2022-11-30 09:41:48', '2022-11-30 09:41:54', 23);
INSERT INTO `sum_signal` VALUES ('22c1d7d9-7893-424d-8dd2-5ca6710e3658', '2022-11-23 21:28:47', '2022-11-23 21:28:59', 8);
INSERT INTO `sum_signal` VALUES ('2901aba2-5a7c-4d4e-850a-2289bb23ad6a', '2022-11-28 21:04:12', '2022-11-28 21:04:20', 7);
INSERT INTO `sum_signal` VALUES ('2aba7f93-01c3-4686-9a9f-f0366dadfba5', '2022-11-23 21:29:16', '2022-11-23 21:29:27', 13);
INSERT INTO `sum_signal` VALUES ('3da31c81-3c89-4b8b-b4fe-cadecea1fb38', '2022-11-28 20:33:36', '2022-11-28 20:34:02', 7);
INSERT INTO `sum_signal` VALUES ('4fe1af0f-6697-4097-affc-9254720305b9', '2022-11-25 15:31:31', '2022-11-25 15:31:35', 15);
INSERT INTO `sum_signal` VALUES ('51c6b2cb-bb9b-4564-a061-5933ddbce505', '2022-11-27 23:07:29', '2022-11-27 23:07:34', 18);
INSERT INTO `sum_signal` VALUES ('5aa81bcf-1f47-43d2-be5c-538dbad5fdc1', '2022-11-23 14:53:56', '', 12);
INSERT INTO `sum_signal` VALUES ('63cada82-abdb-4d80-b65a-2924f738bcb0', '2022-11-27 18:39:16', '2022-11-27 18:39:22', 16);
INSERT INTO `sum_signal` VALUES ('68d9e8e6-cb7e-43a6-9451-c47fbe33cfb2', '2022-11-28 20:41:29', '', 7);
INSERT INTO `sum_signal` VALUES ('77b005f8-d63d-4c04-9fa9-449323909156', '2022-11-28 00:06:20', '2022-11-28 00:06:39', 7);
INSERT INTO `sum_signal` VALUES ('78729cdd-44e5-4a8d-ba2f-372a4e0b940a', '2022-11-23 15:12:49', '2022-11-23 15:12:56', 13);
INSERT INTO `sum_signal` VALUES ('7f919baf-c085-4729-b5b0-27b5c39022d0', '2022-11-23 16:26:56', '2022-11-23 16:27:08', 9);
INSERT INTO `sum_signal` VALUES ('8d32f753-04f2-4419-90d6-b8990642445c', '2022-11-27 22:40:40', '2022-11-27 22:40:50', 18);
INSERT INTO `sum_signal` VALUES ('aeaeb372-8789-4536-b79d-9c30ec02873c', '2022-11-27 22:26:50', '', 18);
INSERT INTO `sum_signal` VALUES ('bee28d6b-e667-43ec-ac3f-5a3814406a95', '2022-11-27 22:42:47', '2022-11-27 22:42:56', 18);
INSERT INTO `sum_signal` VALUES ('c6199916-b57f-4c8d-a0ca-d3a69dc64fdf', '2022-11-23 14:25:59', '2022-11-23 14:26:10', 10);
INSERT INTO `sum_signal` VALUES ('c7c53d39-5cb1-4c73-87ef-b5294fc32419', '2022-11-23 18:22:56', '2022-11-23 18:23:14', 7);
INSERT INTO `sum_signal` VALUES ('cc0a5f1b-a2cc-4be7-b888-e48881b28fdf', '2022-11-18 09:54:35', '2022-11-18 09:55:21', 10);
INSERT INTO `sum_signal` VALUES ('cd43feed-55df-45ab-ac74-8f0126ace059', '2022-11-23 16:25:29', '2022-11-23 16:25:39', 9);
INSERT INTO `sum_signal` VALUES ('ceb17ce8-4a4a-4cba-acd2-da9241db131d', '2022-11-23 14:54:23', '2022-11-23 14:54:41', 12);
INSERT INTO `sum_signal` VALUES ('d23e7620-8923-4600-8e65-9d315d87b6db', '2022-11-27 23:17:23', '2022-11-27 23:17:31', 8);
INSERT INTO `sum_signal` VALUES ('d6acfe41-78de-4195-9b6f-3f1a1c030086', '2022-11-19 15:28:43', '2022-11-19 15:28:59', 10);
INSERT INTO `sum_signal` VALUES ('da444cd9-4f6b-4f3f-a00c-426c0cf26eae', '2022-11-28 09:38:53', '', 7);
INSERT INTO `sum_signal` VALUES ('dff25bb8-cc06-4b70-99cf-7223e45cc023', '2022-11-27 23:53:38', '2022-11-27 23:53:41', 7);
INSERT INTO `sum_signal` VALUES ('e37965d5-81ae-4ca1-bde9-bda3664cdba9', '2022-11-23 21:34:26', '2022-11-23 21:34:28', 12);
INSERT INTO `sum_signal` VALUES ('e8e00907-2934-4c13-9a92-e8653009e404', '2022-11-27 22:35:50', '2022-11-27 22:36:01', 18);
INSERT INTO `sum_signal` VALUES ('f0e316f8-885b-47ac-92f4-9448ce8b1fcd', '2022-11-23 14:58:03', '2022-11-23 14:58:46', 12);
INSERT INTO `sum_signal` VALUES ('test', '1', '100', 1);

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user`  (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `loginName` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL COMMENT '登录名',
  `loginPassword` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '登录密码',
  `name` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '检测人员姓名',
  `postId` int(11) NULL DEFAULT NULL COMMENT '检测人员职务',
  `telephone` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL COMMENT '检测人员电话',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `login_name`(`loginName`) USING BTREE,
  INDEX `post_id`(`postId`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 22 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Compact;

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO `user` VALUES (10, 'ljlgg', '123456', 'ljl', 1, '123535646');
INSERT INTO `user` VALUES (12, 'ljl', '123456', 'ljl', 1, '123535646');
INSERT INTO `user` VALUES (13, 'ljlg', '123456', 'ljl', 1, '123535646');
INSERT INTO `user` VALUES (14, 'ljlgigeg', '123456', 'ljl', 1, '123535646');
INSERT INTO `user` VALUES (15, 'ljlgigegge', '123456', 'ljl', 1, '123535646');
INSERT INTO `user` VALUES (16, 'ljlgiggegge', '123456', 'ljl', 1, '123535646');
INSERT INTO `user` VALUES (19, 'ljlgfe', '123', 'ljg', 2, '13567895094');
INSERT INTO `user` VALUES (20, 'hige', 'hige', 'hel', 2, '13254546234');
INSERT INTO `user` VALUES (21, '1', '1', '1', 1, '1');

SET FOREIGN_KEY_CHECKS = 1;
