# New ports collection makefile for:	libtremor
# Date created:				07 December 2003
# Whom:					kwm@rainbow-runner.nl
#
# $FreeBSD: ports/audio/libtremor/Makefile,v 1.17 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libtremor
PORTVERSION=	1.0.2.${SNAP_DATE}
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://members.chello.nl/~g.mast/distfiles/
DISTNAME=	tremor_snapshot_${SNAP_DATE}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Integer-only fully Ogg Vorbis compliant decoder library

SNAP_DATE=	02132004
WRKSRC=		${WRKDIR}/Tremor
USE_AUTOTOOLS=	automake autoconf libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

pre-configure:
	@cd ${WRKSRC} && ${ACLOCAL}
	@cd ${WRKSRC} && ${LIBTOOLIZE} --automake
	@${REINPLACE_CMD} -e '/^_LT_AC_SHELL_INIT/d' ${WRKSRC}/aclocal.m4
	@cd ${WRKSRC} && ${AUTOMAKE} --add-missing
	@cd ${WRKSRC} && ${AUTOCONF}

do-install:
	for i in ${WRKSRC}/.libs/libvorbisidec.so.1		\
			${WRKSRC}/.libs/libvorbisidec.so	\
			${WRKSRC}/.libs/libvorbisidec.a ; do	\
		${INSTALL_SCRIPT} $$i ${PREFIX}/lib ;		\
	done
	@${MKDIR} ${PREFIX}/include/tremor
	for i in ${WRKSRC}/config_types.h			\
			${WRKSRC}/ivorbiscodec.h		\
			${WRKSRC}/ivorbisfile.h			\
			${WRKSRC}/ogg.h				\
			${WRKSRC}/os_types.h ; do		\
		${INSTALL_SCRIPT} $$i ${PREFIX}/include/tremor ; \
	done

.include <bsd.port.mk>
