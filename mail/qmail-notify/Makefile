# New ports collection makefile for:	qmail-notify
# Date created:		24 Aug 2002
# Whom:			Sergei Kolobov <sergei@kolobov.com>
#
# $FreeBSD: ports/mail/qmail-notify/Makefile,v 1.12 2012/11/17 05:59:12 svnexp Exp $
#

PORTNAME=	qmail-notify
PORTVERSION=	0.93
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://untroubled.org/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Delayed delivery notification for qmail

CFLAGS+=	-DHAVE_SRANDOM

DOCS=		NEWS README TODO
EXAMPLES=	cron.hourly message.txt

do-configure:
	${ECHO_CMD} "${PREFIX}/bin"	> ${WRKSRC}/conf-bin
	${ECHO_CMD} "${CC} ${CFLAGS}"	> ${WRKSRC}/conf-cc
	${ECHO_CMD} "${CC} ${STRIP} ${LDFLAGS}"	> ${WRKSRC}/conf-ld

do-install:
	cd ${WRKSRC} && ./installer
	@${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${EXAMPLES} ${EXAMPLESDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
