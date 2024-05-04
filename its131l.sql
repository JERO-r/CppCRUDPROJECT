CREATE DATABASE  IF NOT EXISTS `its131l` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `its131l`;
-- MySQL dump 10.13  Distrib 8.0.36, for Win64 (x86_64)
--
-- Host: localhost    Database: its131l
-- ------------------------------------------------------
-- Server version	8.0.37

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `assignment`
--

DROP TABLE IF EXISTS `assignment`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `assignment` (
  `ASSIGN_NUM` int NOT NULL AUTO_INCREMENT,
  `ASSIGN_DATE` date DEFAULT NULL,
  `PROJ_NUM` int DEFAULT NULL,
  `EMP_NUM` int DEFAULT NULL,
  `BILL_PH` int DEFAULT NULL,
  PRIMARY KEY (`ASSIGN_NUM`),
  KEY `PROJ_NUM` (`PROJ_NUM`),
  KEY `EMP_NUM` (`EMP_NUM`),
  CONSTRAINT `assignment_ibfk_1` FOREIGN KEY (`PROJ_NUM`) REFERENCES `project` (`PROJ_NUM`),
  CONSTRAINT `assignment_ibfk_2` FOREIGN KEY (`EMP_NUM`) REFERENCES `employee` (`EMP_NUM`)
) ENGINE=InnoDB AUTO_INCREMENT=216 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `assignment`
--

LOCK TABLES `assignment` WRITE;
/*!40000 ALTER TABLE `assignment` DISABLE KEYS */;
INSERT INTO `assignment` VALUES (201,'2020-05-23',16,1,10000),(202,'2020-03-21',16,2,5000),(203,'2020-04-22',16,3,15000),(204,'2019-01-23',22,4,25000),(205,'2020-01-23',22,5,50000),(206,'2020-06-24',22,6,40000),(207,'2020-08-25',32,7,25000),(208,'2020-08-25',32,8,20000),(209,'2020-09-25',32,9,15000),(210,'2021-10-24',44,10,10000),(211,'2023-05-05',44,11,5000),(212,'2022-05-05',44,12,5000),(213,'2024-04-04',44,13,13000),(214,'2024-04-04',44,14,13000),(215,'2024-04-04',44,15,13000);
/*!40000 ALTER TABLE `assignment` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `employee`
--

DROP TABLE IF EXISTS `employee`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `employee` (
  `EMP_NUM` int NOT NULL AUTO_INCREMENT,
  `EMP_LNAME` varchar(20) DEFAULT NULL,
  `EMP_FNAME` varchar(20) DEFAULT NULL,
  `JOB_CODE` int DEFAULT NULL,
  PRIMARY KEY (`EMP_NUM`),
  KEY `JOB_CODE` (`JOB_CODE`),
  CONSTRAINT `employee_ibfk_1` FOREIGN KEY (`JOB_CODE`) REFERENCES `job` (`JOB_CODE`)
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employee`
--

LOCK TABLES `employee` WRITE;
/*!40000 ALTER TABLE `employee` DISABLE KEYS */;
INSERT INTO `employee` VALUES (1,'Balan','Ariel Kelly',101),(2,'Rey','Wlliam',102),(3,'Marayag','Vida',103),(4,'Serrano','Elcid',104),(5,'Vea','Larry',105),(6,'De Goma','Joel',106),(7,'Devaraj','Madhavi',105),(8,'Saharkiz','Aresh',102),(9,'Samonte','Jane',104),(10,'De Guia','Joseph',107),(11,'Gabriel','Antonnette',101),(12,'Villaluz','Alberto',107),(13,'Hilario','Cris Jerome',101),(14,'Cadungon','Khyle',101),(15,'Anza','Jorol',101);
/*!40000 ALTER TABLE `employee` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `job`
--

DROP TABLE IF EXISTS `job`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `job` (
  `JOB_CODE` int NOT NULL AUTO_INCREMENT,
  `JOB_CLASS` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`JOB_CODE`)
) ENGINE=InnoDB AUTO_INCREMENT=108 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `job`
--

LOCK TABLES `job` WRITE;
/*!40000 ALTER TABLE `job` DISABLE KEYS */;
INSERT INTO `job` VALUES (101,'DB Designer'),(102,'System Admin'),(103,'Senior Developer'),(104,'DSS Analyst'),(105,'Data Scientist'),(106,'Programmer'),(107,'System Admin');
/*!40000 ALTER TABLE `job` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `project`
--

DROP TABLE IF EXISTS `project`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `project` (
  `PROJ_NUM` int NOT NULL AUTO_INCREMENT,
  `PROJ_NAME` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`PROJ_NUM`)
) ENGINE=InnoDB AUTO_INCREMENT=45 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `project`
--

LOCK TABLES `project` WRITE;
/*!40000 ALTER TABLE `project` DISABLE KEYS */;
INSERT INTO `project` VALUES (16,'Orion'),(22,'Lyra'),(32,'Cygnus'),(44,'Ursa Minor');
/*!40000 ALTER TABLE `project` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-05-05  1:16:19
