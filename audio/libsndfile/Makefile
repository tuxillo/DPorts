# New ports collection makefile for:	libsndfile
# Date created:			Jul 20, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/audio/libsndfile/Makefile,v 1.61 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libsndfile
PORTVERSION=	1.0.25
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://www.mega-nerd.com/libsndfile/files/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Reading and writing files containing sampled sound (like WAV or AIFF)

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GNOME=	gnomehack pkgconfig
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS=	--disable-gcc-pipe \
		--disable-sqlite \
		--disable-alsa \
		--disable-octave
CPPFLAGS+=	-isystem /usr/include -isystem ${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

MAN1=		sndfile-concat.1 sndfile-cmp.1 sndfile-convert.1 \
		sndfile-info.1 sndfile-metadata-get.1 sndfile-metadata-set.1 \
		sndfile-play.1 sndfile-deinterleave.1 sndfile-interleave.1

PORTDOCS=	AUTHORS ChangeLog NEWS README libsndfile.css \
		new_file_type.HOWTO libsndfile.jpg *.html

OPTIONS_DEFINE=	CPU_CLIP EXTERNAL DOCS
OPTIONS_DEFAULT=	EXTERNAL
CPU_CLIP_DESC=	Allow machine-dependent clipping
EXTERNAL_DESC=	Enable FLAC and Ogg Vorbis support

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MCPU_CLIP}
MANUAL_PACKAGE_BUILD=	WITH_CPU_CLIP may customize the package for the build machine
.else
CONFIGURE_ARGS+=	--disable-cpu-clip
.endif

.if ${PORT_OPTIONS:MEXTERNAL}
LIB_DEPENDS+=	FLAC.10:${PORTSDIR}/audio/flac \
		vorbis.4:${PORTSDIR}/audio/libvorbis
.else
CONFIGURE_ARGS+=--disable-external-libs
.endif

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS =/s/ doc / /g' ${WRKSRC}/Makefile.in

check regression-test test: build
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} \
	check

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@${TAR} -C ${WRKSRC}/doc --exclude "*Makefile*" --exclude "*.in" \
		-cf - . | ${TAR} -C ${DOCSDIR} --unlink -xf -
	@${CHOWN} ${SHAREOWN}:${SHAREGRP} ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
