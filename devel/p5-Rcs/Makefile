# New ports collection makefile for:	devel/p5-Rcs
# Date created:				21 November 2002
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Rcs/Makefile,v 1.6 2012/11/17 05:56:27 svnexp Exp $
#

PORTNAME=	Rcs
PORTVERSION=	1.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl Object Class for Revision Control System (RCS)

PERL_CONFIGURE=	yes

MAN3=		Rcs.3

EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}
EXAMPLES=	access.pl ci.pl co-tree.pl co.pl comments.pl \
		comments2.pl daterev.pl dates.pl parse.pl \
		project/RCS/Rcs.pm,v project/RCS/testfile,v \
		project/src/Rcs.pm project/src/testfile rcsclean.pl \
		rcsdiff.pl revdate.pl rlog.pl symbols.pl symrev.pl \
		test1.pl test2.pl test3.pl unlock.pl

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${MKDIR} ${EXAMPLESDIR}/project
	${MKDIR} ${EXAMPLESDIR}/project/RCS
	${MKDIR} ${EXAMPLESDIR}/project/src
.for _EXAMPLE in ${EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/examples/${_EXAMPLE} ${EXAMPLESDIR}/${_EXAMPLE}
.endfor

.include <bsd.port.mk>
