# Ports collection makefile for:  pear-Mail_Mbox
# Date created:			  27 December 2006
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/mail/pear-Mail_Mbox/Makefile,v 1.8 2012/11/17 05:59:10 svnexp Exp $
#

PORTNAME=	Mail_Mbox
PORTVERSION=	0.6.3
CATEGORIES=	mail www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Read and modify Unix MBOXes

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		Mail/Mbox.php
EXAMPLES=	demobox mimedecode.php read.php modify.php
TESTS=		AllTests.php Mail_MboxTest.php testbox

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
