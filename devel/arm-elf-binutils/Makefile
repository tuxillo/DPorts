# ex:ts=8
# New ports collection makefile for:	binutils-arm
# Date created:		3 November 2000
# Whom:			Espen Skoglund <esk@ira.uka.de>
#
# $FreeBSD: ports/devel/arm-elf-binutils/Makefile,v 1.23 2012/11/17 05:55:33 svnexp Exp $
#

PORTNAME=	binutils
PORTVERSION=	2.17
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEWARE}
MASTER_SITE_SUBDIR=	binutils/releases
PKGNAMEPREFIX=	arm-elf-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU binutils for vanilla ARM cross-development

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--target=${PKGNAMEPREFIX:S/-$//}
INFO_PATH=	${PKGNAMEPREFIX:S/-$//}/info
MAN1=		${PKGNAMEPREFIX}addr2line.1 ${PKGNAMEPREFIX}as.1 \
		${PKGNAMEPREFIX}ar.1 ${PKGNAMEPREFIX}c++filt.1 \
		${PKGNAMEPREFIX}dlltool.1 ${PKGNAMEPREFIX}ld.1 \
		${PKGNAMEPREFIX}nlmconv.1 ${PKGNAMEPREFIX}nm.1 \
		${PKGNAMEPREFIX}objcopy.1 ${PKGNAMEPREFIX}objdump.1 \
		${PKGNAMEPREFIX}ranlib.1 ${PKGNAMEPREFIX}readelf.1 \
		${PKGNAMEPREFIX}size.1 ${PKGNAMEPREFIX}strings.1 \
		${PKGNAMEPREFIX}strip.1 ${PKGNAMEPREFIX}windres.1

post-install:
.for F in addr2line c++filt objcopy objdump readelf size strings
	${LN} -f ${PREFIX}/bin/${PKGNAMEPREFIX}$F  \
		${PREFIX}/${PKGNAMEPREFIX:S/-$//}/bin/$F
.endfor
	cd ${PREFIX}/lib ; ${MV} libiberty.a \
		${PREFIX}/${PKGNAMEPREFIX:S/-$//}/lib
	${RM} ${PREFIX}/${PKGNAMEPREFIX:S/-$//}/info/*
	${RMDIR} ${PREFIX}/${PKGNAMEPREFIX:S/-$//}/info

.include <bsd.port.mk>
