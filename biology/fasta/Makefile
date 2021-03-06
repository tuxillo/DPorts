# New ports collection makefile for:	fasta
# Date created:		29 January 2001
# Whom:	      		Johann Visagie <johann@egenetics.com>
#
# $FreeBSD: ports/biology/fasta/Makefile,v 1.13 2012/11/17 05:54:51 svnexp Exp $
#

PORTNAME=	fasta
PORTVERSION=	21.1.1
CATEGORIES=	biology
MASTER_SITES=	http://faculty.virginia.edu/wrpearson/fasta/fasta2/ \
		ftp://ftp.ebi.ac.uk/pub/software/unix/fasta/fasta2/
EXTRACT_SUFX=	.shar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A collection of programs for searching DNA and protein databases

NO_CDROM=	May not be sold or incorporated into a commercial product
WRKSRC=		${WRKDIR}/fasta
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES=	pkg-message
FASTA_DOCS=	COPYRIGHT README.versions fasta20.doc fasta20.me format.doc \
		readme.*

MAN1=		align.1 fasta.1 lalign.1 prdf.1 prss.1 randseq.1 ssearch.1
MLINKS=		fasta.1 tfasta.1 fasta.1 lfasta.1 fasta.1 plfasta.1 \
		fasta.1 fastx.1  fasta.1 tfastx.1 \
		align.1 align0.1 lalign.1 plalign.1

do-extract:
	@ ${RM} -rf ${WRKDIR}
	@ ${MKDIR} ${WRKSRC}
	@ for file in ${EXTRACT_ONLY}; do \
	  cd ${WRKSRC} && (${GZCAT} ${DISTDIR}/$${file} | ${SH} >/dev/null); \
	done

post-install:
.for manpage in ${MAN1}
	@ ${INSTALL_MAN} ${WRKSRC}/${manpage} ${MAN1PREFIX}/man/man1/
.endfor
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
.for docfile in ${FASTA_DOCS}
	@ ${INSTALL_DATA} ${WRKSRC}/${docfile} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
IGNORE=		does not build: runs out of space on powerpc
.endif

.include <bsd.port.post.mk>
