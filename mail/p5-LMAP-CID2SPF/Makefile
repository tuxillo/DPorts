# New ports collection makefile for:	LMAP-CID2SPF
# Date Created:				2006-11-03
# Whom:					Shaun Amott <shaun@FreeBSD.org>
#
# $FreeBSD: ports/mail/p5-LMAP-CID2SPF/Makefile,v 1.7 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	LMAP-CID2SPF
DISTVERSION=	0.9
CATEGORIES=	mail perl5
MASTER_SITES=	http://www.baschny.de/spf/
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Module to convert between Microsoft's Caller-ID and SPF		#'

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser

PERL_CONFIGURE=	yes
CONFIGURE_SCRIPT=Makefile.PL

PLIST_FILES+=	bin/cid2spf %%SITE_PERL%%/LMAP/CID2SPF.pm
PLIST_FILES+=	"@unexec rmdir %D/%%SITE_PERL%%/LMAP 2>/dev/null || true"

do-install:
	@${MKDIR} ${SITE_PERL}/LMAP
	cd ${WRKSRC} && ${INSTALL_SCRIPT} cid2spf ${PREFIX}/bin
	cd ${WRKSRC} && ${INSTALL_DATA} CID2SPF.pm ${SITE_PERL}/LMAP

.include <bsd.port.mk>
