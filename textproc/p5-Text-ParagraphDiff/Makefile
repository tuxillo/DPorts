# New ports collection makefile for:	p5-Text-ParagraphDiff
# Date created:				Nov 3 2003
# Whom:					Cheng-Lung Sung <clsung@dragon2.net>
#
# $FreeBSD: ports/textproc/p5-Text-ParagraphDiff/Makefile,v 1.10 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-ParagraphDiff
PORTVERSION=	2.70
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Visual difference for paragraphed text

BUILD_DEPENDS=	p5-Algorithm-Diff>=0:${PORTSDIR}/devel/p5-Algorithm-Diff \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

SCRIPTS=	tdiff
EXAMPLES=	diff.html new.txt old.txt
EXAMPLESDIR=	${PREFIX}/share/examples/p5-Text-ParagraphDiff
MAN3=		Text::ParagraphDiff.3

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/bin && \
	${INSTALL_SCRIPT} ${SCRIPTS} ${EXAMPLESDIR}
	cd ${WRKSRC}/examples && \
	${INSTALL_DATA} ${EXAMPLES} ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
