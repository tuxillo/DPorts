# Ports collection makefile for:  pear-Pager
# Date created:			  09 November 2004
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/devel/pear-Pager/Makefile,v 1.23 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	Pager
PORTVERSION=	2.4.8
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR data paging class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Pager
FILES=		Common.php Jumping.php Pager.php Sliding.php \
		HtmlWidgets.php Pager_savebc.php
EXAMPLES=	example.php Pager_Wrapper.php
TESTS=		all_tests.php pager_include.php pager_jumping_noData_test.php \
		pager_jumping_test.php pager_jumping_tests.php \
		pager_noData_test.php pager_sliding_noData_test.php \
		pager_sliding_notExpanded_test.php pager_sliding_test.php \
		pager_sliding_tests.php pager_test.php pager_test_xss.php \
		pager_tests.php pager_wrapper_include.php pager_wrapper_test.php \
		simple_include.php README \
		multibyte_post.php pager_post_test.php \
		pager_post_tests.php pager_post_test_simple.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
