# Ports collection makefile for:  pear-XML_Transformer
# Date created:			  29 September 2004
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/devel/pear-XML_Transformer/Makefile,v 1.8 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	XML_Transformer
PORTVERSION=	1.1.2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR XML Transformations in PHP

BUILD_DEPENDS=	${PEARDIR}/XML/Util.php:${PORTSDIR}/devel/pear-XML_Util
RUN_DEPENDS:=	${PEARDIR}/XML/Util.php:${PORTSDIR}/devel/pear-XML_Util

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
