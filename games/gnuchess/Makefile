# New ports collection makefile for:	Gnu Chess
# Date created:		04 July 1996
# Whom:			markm
#
# $FreeBSD: ports/games/gnuchess/Makefile,v 1.36 2012/11/17 05:57:40 svnexp Exp $
#

PORTNAME=	gnuchess
PORTVERSION=	6.0.2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	chess
# The DISTFILES here is explicitly needed because it can be extended later.
DISTFILES=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	"Classic" Gnu Chess

INFO=		gnuchess
PLIST_FILES=	bin/gnuchess bin/gnuchessu bin/gnuchessx
PORTDOCS=	*
PORTDATA=	*

OPTIONS_DEFINE=		OPENING_BOOK
OPTIONS_DEFAULT=	OPENING_BOOK
OPENING_BOOK_DESC=	Install opening book (25 MB download)

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MOPENING_BOOK}
DISTFILES+=	book_1.02.pgn.gz
EXTRACT_ONLY+=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}
.endif

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="${PTHREAD_LIBS}" MKDIR_P="${MKDIR}"

post-patch:
	@${REINPLACE_CMD} -e 's|-D_THREAD_SAFE|${PTHREAD_CFLAGS:S/"//g}|g ; \
		 s|-pthread ||g' ${WRKSRC}/configure

post-build:
.if ${PORT_OPTIONS:MOPENING_BOOK}
	zcat ${DISTDIR}/book_1.02.pgn.gz > ${WRKSRC}/src/book.pgn
	cd ${WRKSRC}/src && ./gnuchess --addbook book.pgn
	@${REINPLACE_CMD} -e '/Book =/s/false/true/' ${WRKSRC}/src/gnuchess.ini
.endif

post-install:
	${LN} -f ${PREFIX}/bin/gnuchess ${PREFIX}/bin/gnuchessx
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
