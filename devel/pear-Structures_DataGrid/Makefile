# Ports collection makefile for:	pear-Structures_DataGrid
# Date created:				12 January 2005
# Whom:					Nick Hilliard <nick@foobar.org>
#
# $FreeBSD: ports/devel/pear-Structures_DataGrid/Makefile,v 1.9 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	Structures_DataGrid
PORTVERSION=	0.9.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A full-featured tabular structured data management package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Console/Table.php:${PORTSDIR}/devel/pear-Console_Table

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
