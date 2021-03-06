# Created by: Janos.Mohacsi@bsd.hu
# $FreeBSD: ports/net-mgmt/nfdump-devel/Makefile,v 1.24 2012/11/17 06:00:35 svnexp Exp $

PORTNAME=	nfdump-devel
PORTVERSION=	20070808
PORTREVISION=	4
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/nfdump/snapshot/nfdump-snapshot-${PORTVERSION}
DISTNAME=	nfdump-snapshot-${PORTVERSION}

MAINTAINER=	janos.mohacsi@bsd.hu
COMMENT=	Development version of tools to collect and process NetFlow data

BUILD_DEPENDS=	rrdtool:${PORTSDIR}/databases/rrdtool
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-nfprofile --with-rrdpath=${LOCALBASE}

#flow-tools support
OPTIONS_DEFINE=		FT2NFDUMP SFLOW NFDUMP14
OPTIONS_DEFAULT=	

FT2NFDUMP_DESC=		With Flow-tools to nfdump converter
SFLOW_DESC=		Build sflow collector daemon also
NFDUMP14_DESC=		Enable compatbility with version 1.4

.include <bsd.port.options.mk>

.if ${OSVERSION} < 700000
BROKEN=		does not configure on 6.X
.endif

#for compatibility
#
.if ${PORT_OPTIONS:MNFDUMP14}
CONFIGURE_ARGS+=	--enable-compat14
.else
CONFIGURE_ARGS+=	--disable-compat14
.endif

PLIST_FILES=	bin/nfcapd bin/nfdump bin/nfreplay bin/nfexpire bin/nfprofile
MAN1=		nfcapd.1 nfdump.1 nfexpire.1 nfprofile.1 nfreplay.1
PORTDOCS=	AUTHORS ChangeLog INSTALL README

#flow-tools support
.if ${PORT_OPTIONS:MFT2NFDUMP}
BUILD_DEPENDS+=		flow-cat:${PORTSDIR}/net-mgmt/flow-tools
CONFIGURE_ARGS+=	--enable-ftconv --with-ftpath=${LOCALBASE}
PLIST_FILES+=	bin/ft2nfdump
MAN1+=		ft2nfdump.1
.endif

#sflow capture support
.if ${PORT_OPTIONS:MSFLOW}
CONFIGURE_ARGS+=	--enable-sflow
PLIST_FILES+=	bin/sfcapd
MAN1+=		sfcapd.1
.else
CONFIGURE_ARGS+=	--disable-sflow
.endif

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
