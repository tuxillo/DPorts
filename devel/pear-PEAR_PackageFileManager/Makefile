# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: ports/devel/pear-PEAR_PackageFileManager/Makefile,v 1.11 2012/12/17 02:17:59 svnexp Exp $

PORTNAME=	PEAR_PackageFileManager
PORTVERSION=	1.7.0
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class to maintain PEAR packages

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

LATEST_LINK=	pear-${PORTNAME}
OPTIONS_DEFINE=	PEAR_PHP_COMPATINFO PEAR_XML_TREE
PEAR_PHP_COMPATINFO_DESC=	PEAR::PHP_CompatInfo support
PEAR_XML_TREE_DESC=	PEAR::XML_Tree support

CATEGORY=	PEAR

FILES=		PackageFileManager/SimpleGenerator.php \
		PackageFileManager/XMLOutput.php PackageFileManager.php
EXAMPLES=	createPhpDocumentor_package.xml.php generatePackage.xml.php
TESTS=		addConfigureOption/test_invalid_nosetoptions.phpt \
		addConfigureOption/test_valid_add1.phpt \
		addConfigureOption/test_valid_add2.phpt \
		addConfigureOption/test_valid_replace.phpt \
		addDependency/test_invalid_nosetoptions.phpt \
		addDependency/test_invalid_phppkg.phpt \
		addDependency/test_valid_add_php.phpt \
		addDependency/test_valid_add_pkg_explicit.phpt \
		addDependency/test_valid_add_pkg_implicit.phpt \
		addDependency/test_valid_replace.phpt \
		addMaintainer/test_invalid_nosetoptions.phpt \
		addMaintainer/test_invalid_wrongrole.phpt \
		addMaintainer/test_valid_add.phpt \
		addMaintainer/test_valid_replace.phpt \
		addReplacement/test_invalid_replacement.phpt \
		addReplacement/test_valid_replacement.phpt \
		generateNewPackageXML/test_invalid_nodescription.phpt \
		generateNewPackageXML/test_invalid_nopackage.phpt \
		generateNewPackageXML/test_invalid_nosummary.phpt \
		generateNewPackageXML/test_valid_simple.phpt \
		generateNewPackageXML/test_valid_withdeps.phpt \
		generateNewPackageXML/test_valid_withdepsfalse.phpt \
		generateNewPackageXML/test_valid_withmaintainers.phpt \
		generateNewPackageXML/test_valid_withmaintainersfalse.phpt \
		getExistingPackageXML/test_invalid_notexists_nopackage.phpt \
		getExistingPackageXML/test_invalid_wrongdir.phpt \
		getExistingPackageXML/test_valid_deps.phpt \
		getExistingPackageXML/test_valid_maintainers.phpt \
		getExistingPackageXML/test_valid_simple.phpt \
		importOptions/test_invalid.phpt \
		importOptions/test_valid.phpt \
		PEAR_PackageFileManager_XMLOutput/test_valid1.phpt \
		setOptions/test_invalid_badfilelistgenerator1.phpt \
		setOptions/test_invalid_badfilelistgenerator2.phpt \
		setOptions/test_invalid_badfilelistgenerator3.phpt \
		setOptions/test_invalid_filelistgeneratorcustom.phpt \
		setOptions/test_invalid_nobaseinstalldir.phpt \
		setOptions/test_invalid_nopackagedir.phpt \
		setOptions/test_invalid_nostate.phpt \
		setOptions/test_invalid_noversion.phpt \
		setOptions/test_valid_filelistgeneratorcustom.phpt \
		setOptions/test_valid_filelistgeneratorcvs.phpt \
		setOptions/test_valid_filelistgeneratorfile.phpt \
		Bad_file.php phpt_test.php.inc setup.php.inc test1_package.xml \
		Test_file.php

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPEAR_PHP_COMPATINFO}
RUN_DEPENDS+=	${PEARDIR}/PHP/CompatInfo.php:${PORTSDIR}/devel/pear-PHP_CompatInfo
.endif

.if ${PORT_OPTIONS:MPEAR_XML_TREE}
RUN_DEPENDS+=	${PEARDIR}/XML/Tree.php:${PORTSDIR}/devel/pear-XML_Tree
.endif

.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.mk>
