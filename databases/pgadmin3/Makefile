# New ports collection makefile for:    pgadmin3
# Date created:                         November 4, 2003
# Whom:                                 Max Khon
#
# $FreeBSD: ports/databases/pgadmin3/Makefile,v 1.59 2012/11/17 05:55:18 svnexp Exp $
#

PORTNAME=	pgadmin3
PORTVERSION=	1.16.0
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	PGSQL
MASTER_SITE_SUBDIR=	pgadmin3/release/v${PORTVERSION}/src
DIST_SUBDIR=	postgresql

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	PostgreSQL database design and management system

BUILD_DEPENDS=	sphinx-build:${PORTSDIR}/textproc/py-sphinx

IGNORE_WITH_PGSQL=	82 83

MAKE_JOBS_SAFE=	yes
USE_GETTEXT=	yes
USE_PGSQL=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="${PTHREAD_LIBS}"
CPPFLAGS+=	${PTHREAD_CFLAGS}
CONFIGURE_ARGS=	--with-wx-version=${USE_WX}
USE_GNOME=	libxml2 libxslt
USE_WX=		2.8
WX_COMPS=	wx contrib
WX_UNICODE=	yes

PLIST_FILES=	bin/pgadmin3 bin/png2c
PORTDATA=	*

post-patch:
	@${REINPLACE_CMD} -e 's,/wx-config,/${WX_CONFIG:T},' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's,/usr/bin/xterm,${LOCALBASE}/bin/xterm,' ${WRKSRC}/plugins.d/plugins.ini
	@${REINPLACE_CMD} -e 's,/bin/bash,/bin/sh,' ${WRKSRC}/pgadmin/ver_svn.sh

.include <bsd.port.mk>
