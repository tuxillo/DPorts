# New ports collection makefile for:	bayespam
# Date created:				Sun Sep  8 16:15:26 UTC 2002
# Whom:                 Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
#
# $FreeBSD: ports/mail/bayespam/Makefile,v 1.11 2012/11/17 05:58:59 svnexp Exp $
#

PORTNAME=	bayespam
PORTVERSION=	0.9.2
CATEGORIES=	mail
MASTER_SITES=	http://www.garyarnold.com/sites/default/files/
EXTRACT_SUFX=	.tar_.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	qmail spam filter written in Perl using Bayesian classification

RUN_DEPENDS=	p5-MIME-Tools>=0:${PORTSDIR}/mail/p5-MIME-Tools

USE_PERL5=	yes
NO_BUILD=	yes

FILES_DOCS=	AUTHORS COPYING Changelog INSTALL README TODO \
		qmail.sample
FILES_SCRIPTS=	bayes_process_email.pl bayes_spam_check.pl bayestest.pl

post-patch:
# fix location of Bayesian filter
	@${REINPLACE_CMD} -e 's|/user/|${PREFIX}/|' ${WRKSRC}/README
	@${REINPLACE_CMD} -e 's|/usr/bin/|${PREFIX}/bin/|' \
		${WRKSRC}/qmail.sample
	@${REINPLACE_CMD} -E -e \
		's|/usr/bin/(bayes_spam_check.pl)|${PREFIX}/bin/\1|' \
		${WRKSRC}/bayestest.pl
# fix location of PERL
	@${REINPLACE_CMD} -e 's|/usr/bin/perl|${PERL}|' ${WRKSRC}/*.pl

do-install:
.ifndef(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in ${FILES_DOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif
	@${MKDIR} ${PREFIX}/${SITE_PERL_REL}/Bayespam
	@${INSTALL_DATA} ${WRKSRC}/Bayespam/Process.pm \
		${PREFIX}/${SITE_PERL_REL}/Bayespam
.for file in ${FILES_SCRIPTS}
	@${INSTALL_SCRIPT} ${WRKSRC}/${file} ${PREFIX}/bin
.endfor

.include <bsd.port.mk>
