# Create by: Eduard Martinescu
# $FreeBSD: ports/sysutils/smartmontools/Makefile,v 1.63 2012/11/17 06:01:46 svnexp Exp $

PORTNAME=	smartmontools
PORTVERSION=	6.0
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	samm@os2.kiev.ua
COMMENT=	S.M.A.R.T. disk monitoring tools

LICENSE=	GPLv2

CONFLICTS=	smartmontools-devel-[0-9]*

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-dependency-tracking \
		--enable-drivedb --enable-sample \
		--with-initscriptdir=${PREFIX}/etc/rc.d

SUB_FILES=	pkg-message smart
USE_RC_SUBR=	smartd

MAN5=		smartd.conf.5
MAN8=		smartd.8 smartctl.8

PORTDOCS=	*

.if defined(NOPORTDOCS)
CONFIGURE_ARGS+=	--without-docdir --without-exampledir
.else
CONFIGURE_ARGS+=	--with-docdir=${DOCSDIR}
.endif

CFLAGS:=	${CFLAGS:S/-O2/-O/} -Wno-write-strings

post-patch:
	@${REINPLACE_CMD} -e 's| install-initdDATA| |' ${WRKSRC}/Makefile.in

post-install:
	${MKDIR} ${PREFIX}/etc/periodic/daily
	${INSTALL_SCRIPT} ${WRKDIR}/smart ${PREFIX}/etc/periodic/daily/smart

	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
