# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/devel/libdap/Makefile,v 1.15 2012/12/09 03:41:54 svnexp Exp $

PORTNAME=	libdap
PORTVERSION=	3.11.7
CATEGORIES=	devel
MASTER_SITES=	http://www.opendap.org/pub/source/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	SDK which contains an implementation of DAP 2.0 and 3.1

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl \
		uuid:${PORTSDIR}/misc/e2fsprogs-libuuid \
		xml2:${PORTSDIR}/textproc/libxml2

CFLAGS+=	${PTHREAD_CFLAGS}
CONFIGURE_ARGS=	--with-zlib=/usr
CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
USE_GMAKE=	yes
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes

MAN1=		dap-config.1 \
		getdap.1

post-patch:
	# do not alter ${PREFIX}/lib/charset.alias
	@${REINPLACE_CMD} -e '/^install-exec-am: / s|install-exec-local||' ${WRKSRC}/gl/Makefile.in

.include <bsd.port.mk>
