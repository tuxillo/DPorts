# New ports collection makefile for:	gwhois
# Date created:		28 August 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/net/gwhois/Makefile,v 1.17 2012/11/26 12:05:42 svnexp Exp $
#

PORTNAME=	gwhois
PORTVERSION=	20120626
CATEGORIES=	net
MASTER_SITES=	http://gwhois.de/gwhois/
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Flexible whois client and proxy

RUN_DEPENDS=	p5-libwww>=5.805:${PORTSDIR}/www/p5-libwww \
		p5-Net-LibIDN>=0:${PORTSDIR}/dns/p5-Net-LibIDN \
		lynx:${PORTSDIR}/www/lynx \
		curl:${PORTSDIR}/ftp/curl

NO_BUILD=	yes
USE_PERL5_RUN=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}
PLIST_FILES=	bin/${PORTNAME} %%DATADIR%%/pattern
PLIST_DIRS=	%%DATADIR%%
MAN1=	${PORTNAME}.1
PORTDOCS=	TODO README.RIPE

post-patch:
	@${REINPLACE_CMD} -e 's|/etc/gwhois|${DATADIR}|g'\
		${WRKSRC}/${PORTNAME} ${WRKSRC}/${PORTNAME}.1

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	@${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1/
	@${INSTALL} -d ${DATADIR}/
	@${INSTALL_DATA} ${WRKSRC}/pattern ${DATADIR}/
.ifndef NOPORTDOCS
	@${INSTALL} -d ${DOCSDIR}/
	@cd ${WRKSRC}/&&${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
