# Created by: Domas Mituzas <midom@dammit.lt>
# $FreeBSD: ports/databases/sqsh/Makefile,v 1.39 2012/12/13 04:41:37 svnexp Exp $

PORTNAME=	sqsh
PORTVERSION=	2.1.8
CATEGORIES=	databases
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interactive tool for querying Sybase database servers

LICENSE=	GPLv2 # (or later)

LIB_DEPENDS=	ct:${PORTSDIR}/databases/freetds

OPTIONS_DEFINE=	X11
OPTIONS_DEFAULT=X11

USE_READLINE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	SYBASE="${LOCALBASE}"
CONFIGURE_ARGS=	--with-readline
ALL_TARGET=	build
MAKE_JOBS_SAFE=	yes

MAN1=		sqsh.1
PLIST_FILES=	bin/sqsh etc/sqshrc.default

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MX11}
USE_MOTIF=	yes
CONFIGURE_ARGS+=	--with-motif --with-x
.else
PKGNAMESUFFIX=	-nox11
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/doc/global.sqshrc

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/sqsh ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/sqsh.1 ${MANPREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/doc/global.sqshrc ${PREFIX}/etc/sqshrc.default

.include <bsd.port.mk>
