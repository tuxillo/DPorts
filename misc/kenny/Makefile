# Created by: Alan E <alane@FreeBSD.org>
# $FreeBSD: ports/misc/kenny/Makefile,v 1.14 2012/12/10 22:04:18 svnexp Exp $

PORTNAME=	kenny
PORTVERSION=	1.7
CATEGORIES=	misc perl5
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}\
				http://www.cgarbs.de/stuff/
DISTNAME=	${PORTNAME}.pl-${PORTVERSION}
EXTRACT_SUFX=	.gz

MAINTAINER=	ak@FreeBSD.org
COMMENT=	Translate text both to and from KennySpeak

PROJECTHOST=	ak-various-projects

CONFLICTS=	filters-*

USE_PERL5=	yes
EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	> ${WRKDIR}/${PORTNAME}
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

MAN1=		kenny.1
PLIST_FILES=	bin/kenny

POD2MAN?=	${LOCALBASE}/bin/pod2man

post-extract:
	@${REINPLACE_CMD} -e 's|/usr/bin/perl|${PERL}|' ${WRKSRC}/${PORTNAME}
	@${POD2MAN} ${WRKDIR}/${PORTNAME} > ${WRKDIR}/${PORTNAME}.1

do-install:
	@${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin/
	@${INSTALL_MAN} ${WRKDIR}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1/

.include <bsd.port.mk>
