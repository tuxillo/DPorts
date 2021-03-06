# Created by: Tony Maher <tonym@biolateral.com.au>
# $FreeBSD: ports/biology/primer3/Makefile,v 1.17 2012/11/17 05:54:53 svnexp Exp $

PORTNAME=	primer3
PORTVERSION=	1.1.4
CATEGORIES=	biology
MASTER_SITES=	SF

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Primer3 helps to choose primers for PCR reactions

USE_GMAKE=	yes
WRKSRC=		${WRKDIR}/src
DOCUMENTS=	README.txt example

post-patch:
	@${REINPLACE_CMD} \
		-e 's#^CC *=#CC ?=#;' \
		-e 's#^CFLAGS.*#CFLAGS  += \$$\(CC_OPTS\)#;' \
		-e 's#CC_OPTS = -g#CC_OPTS =#;' \
		-e 's#LDFLAGS = -g#LDFLAGS +=#;' \
		-e 's#^WHITEHEAD_SPECIFIC_HACK.*##;' \
		${WRKDIR}/src/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKDIR}/src/primer3_core ${PREFIX}/bin/primer3
	@${MKDIR} ${DATADIR}
	@${INSTALL_DATA} ${WRKDIR}/COPYING.txt ${DATADIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in ${DOCUMENTS}
	@${INSTALL_DATA} ${WRKDIR}/${file} ${DOCSDIR}
.endfor
	@${RM} -rf ${WRKDIR}/test/primer*_list_tmp
	@${MKDIR} ${EXAMPLESDIR}
	@cd ${WRKDIR}/test && ${FIND} * | ${CPIO} --quiet \
		-pdum -R ${SHAREOWN}:${SHAREGRP} ${EXAMPLESDIR}
.endif

post-install:
	@${CAT} ${DATADIR}/COPYING.txt

.include <bsd.port.mk>
