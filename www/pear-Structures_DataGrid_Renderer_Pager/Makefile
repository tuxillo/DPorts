# Ports collection makefile for:	pear-Structures_DataGrid_Renderer_Pager
# Date created:				26 Jun 2008
# Whom:					Nick Hilliard <nick@foobar.org>
#
# $FreeBSD: ports/www/pear-Structures_DataGrid_Renderer_Pager/Makefile,v 1.2 2012/11/17 06:02:57 svnexp Exp $
#

PORTNAME=	Structures_DataGrid_Renderer_Pager
PORTVERSION=	0.1.3
CATEGORIES=	www pear

MAINTAINER=	nick@foobar.org
COMMENT=	Pager Renderer for pear-Structures_DataGrid

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid \
		${PEARDIR}/Pager/Pager.php:${PORTSDIR}/devel/pear-Pager

CATEGORY=	Structures
FILES=		DataGrid/Renderer/Pager.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
