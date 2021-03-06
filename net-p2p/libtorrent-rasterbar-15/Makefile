# $FreeBSD: ports/net-p2p/libtorrent-rasterbar-15/Makefile,v 1.20 2012/12/02 16:25:00 svnexp Exp $

PORTNAME=	libtorrent-rasterbar
PORTVERSION=	0.15.9
PORTREVISION?=	2
CATEGORIES?=	net-p2p ipv6
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PROJECTHOST=	libtorrent

MAINTAINER=	ports@FreeBSD.org
COMMENT?=	C++ library implementing a BitTorrent client

MAKE_JOBS_SAFE=	yes

CONFLICTS+=	libtorrent-rasterbar-0.1[46789].*

NO_LATEST_LINK=	yes

BUILD_DEPENDS=	pkgconf>0:${PORTSDIR}/devel/pkgconf
LIB_DEPENDS+=	boost_date_time.4:${PORTSDIR}/devel/boost-libs \
		GeoIP.5:${PORTSDIR}/net/GeoIP

USE_GNOME=	gnomehack
USE_OPENSSL=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--disable-debug \
		--disable-static \
		--enable-dht \
		--enable-encryption \
		--enable-pool-allocators \
		--enable-deprecated-functions \
		--with-boost=${LOCALBASE} \
		--with-boost-system=boost_system \
		--with-boost-filesystem=boost_filesystem \
		--with-boost-thread=boost_thread \
		--enable-geoip \
		--with-libgeoip \
		--with-openssl=${OPENSSLBASE} \
		--with-zlib=system

USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

.if defined(SLAVE_PORT) && ${SLAVE_PORT:tl}=="yes" && defined(USE_PYTHON)
CONFIGURE_ARGS+=	--enable-python-binding \
			--with-boost-python=boost_python
.else
CONFIGURE_ARGS+=	--disable-python-binding
.endif

pre-patch:
	@${MV} ${WRKSRC}/include/libtorrent/alloca.hpp \
	    ${WRKSRC}/include/libtorrent/alloca.hpp.Dist
	@${SED} -e 's#alloca.h#stdlib.h#g' \
	    ${WRKSRC}/include/libtorrent/alloca.hpp.Dist > \
	    ${WRKSRC}/include/libtorrent/alloca.hpp
	@${CP} ${WRKSRC}/configure ${WRKSRC}/configure.Dist
	@${SED} -e 's#COMPILETIME_OPTIONS+="#COMPILETIME_OPTIONS="$$COMPILETIME_OPTIONS #g' \
	    ${WRKSRC}/configure.Dist > ${WRKSRC}/configure

.if defined(SLAVE_PORT) && ${SLAVE_PORT:tl}=="yes"
post-patch: slave-post-patch
.endif

.if defined(SLAVE_PORT) && ${SLAVE_PORT:tl}=="yes"
post-install: slave-post-install
.else
post-install:
.endif
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/*.html ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/*.css ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/*.gif ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/*.jpg ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/*.png ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
