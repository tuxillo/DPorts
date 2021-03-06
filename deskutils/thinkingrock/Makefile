# Created by: Beat Gaetzi <beat@chruetertee.ch>
# $FreeBSD: ports/deskutils/thinkingrock/Makefile,v 1.11 2012/12/10 13:24:55 svnexp Exp $

PORTNAME=	thinkingrock
PORTVERSION=	2.2.1
PORTREVISION=	1
CATEGORIES=	deskutils java
MASTER_SITES=	SF/${PORTNAME}/ThinkingRock/TR%20${PORTVERSION}
DISTNAME=	tr-${PORTVERSION}

MAINTAINER=	beat@FreeBSD.org
COMMENT=	Application for collecting and processing your thoughts

USE_JAVA=	yes
JAVA_VERSION=	1.6+
NO_BUILD=	yes

SUB_FILES=	pkg-message

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/bin/tr
	@${REINPLACE_CMD} -e \
		's|default_options="|default_options="-J-Djava.endorsed.dirs=${PREFIX}/${PORTNAME}/tr/modules/ext/endorsed |' \
		${WRKSRC}/etc/tr.conf
	@${RM} ${WRKSRC}/bin/tr.bak ${WRKSRC}/bin/tr.exe \
		${WRKSRC}/bin/tr_w.exe ${WRKSRC}/etc/tr.conf.bak

do-install:
	@${MKDIR} ${PREFIX}/${PORTNAME}
	@${CP} -r ${WRKSRC}/* ${PREFIX}/${PORTNAME}
	@${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/${PORTNAME}
	@${LN} -sf ${PREFIX}/${PORTNAME}/bin/tr ${PREFIX}/bin/${PORTNAME}
	@${LN} -sf ${PREFIX}/${PORTNAME}/bin/xdg-email ${PREFIX}/bin/xdg-email
	@${LN} -sf ${PREFIX}/${PORTNAME}/bin/xdg-open ${PREFIX}/bin/xdg-open
	@${ECHO} bin/${PORTNAME} >> ${TMPPLIST}
	@${ECHO} bin/xdg-email >> ${TMPPLIST}
	@${ECHO} bin/xdg-open >> ${TMPPLIST}
	@(cd ${WRKSRC}; ${FIND} . ! -type d) | ${SORT} | ${SED} "s|^.|${PORTNAME}|" >> ${TMPPLIST}
	@(cd ${WRKSRC}; ${FIND} . -type d) | ${SORT} -r | ${SED} "s|^.|@dirrm ${PORTNAME}|" >> ${TMPPLIST}
	@(cd ${WRKSRC}; ${FIND} . -type d -empty) | ${SORT} -r | ${SED} "s|^.|@exec mkdir -p ${PORTNAME}|" >> ${TMPPLIST}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
