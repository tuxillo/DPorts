# ex:ts=8
# New ports collection makefile for:	grc
# Date created:			Mar 25, 2001
# Whom:				Ying-Chieh Liao <ijliao@FreeBSD.org>
#
# $FreeBSD: ports/misc/grc/Makefile,v 1.15 2012/11/17 05:59:38 svnexp Exp $
#

PORTNAME=	grc
PORTVERSION=	1.4
CATEGORIES=	misc
MASTER_SITES=	http://kassiopeia.juls.savba.sk/~garabik/software/grc/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generic Colouriser

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
NO_BUILD=	yes

USE_PYTHON_RUN=	yes

MAN1=	grc.1 grcat.1

post-patch:
.for i in grc grcat
	@${REINPLACE_CMD} -e \
		's|/usr/bin/python|${SETENV} python|g ; \
		 s|"/etc/grc|"${PREFIX}/etc/grc|g ; \
		 s|/usr/local/share/grc|${DATADIR}|g ; \
		 s|, "/usr/share/grc/"||g' ${WRKSRC}/${i}
	@${REINPLACE_CMD} -e \
		's| /etc/grc| ${PREFIX}/etc/grc|g ; \
		 s|/usr/local/share/grc|${DATADIR}|g ; \
		 s|, /usr/share/grc/||g' ${WRKSRC}/${i}.1
.endfor

do-install:
.for i in grc grcat
	${INSTALL_SCRIPT} ${WRKSRC}/${i} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${i}.1 ${MAN1PREFIX}/man/man1
.endfor
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/conf.* ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/grc.conf ${PREFIX}/etc

.include <bsd.port.mk>
