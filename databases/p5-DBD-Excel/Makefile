# New ports collection makefile for:	DBD::Excel
# Date created:				24 Jan 2002
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/databases/p5-DBD-Excel/Makefile,v 1.14 2012/12/11 19:59:24 svnexp Exp $
#

PORTNAME=	DBD-Excel
PORTVERSION=	0.06
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	A class for DBI drivers that acts on Excel files

BUILD_DEPENDS=	p5-SQL-Statement>=0:${PORTSDIR}/databases/p5-SQL-Statement \
		p5-Spreadsheet-ParseExcel>=0:${PORTSDIR}/textproc/p5-Spreadsheet-ParseExcel \
		p5-Spreadsheet-WriteExcel>=0:${PORTSDIR}/textproc/p5-Spreadsheet-WriteExcel \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

EXAMPLESDIR?=	${PREFIX}/share/examples/${PORTNAME}
PERL_CONFIGURE=	yes

MAN3=		DBD::Excel.3

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/sample/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
