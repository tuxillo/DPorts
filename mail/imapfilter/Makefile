# New ports collection makefile for:	imapfilter
# Date created:        28 July 2002
# Whom:                Lefteris Chatzibarbas <lefcha@hellug.gr>
#
# $FreeBSD: ports/mail/imapfilter/Makefile,v 1.31 2012/12/10 19:24:02 svnexp Exp $
#

PORTNAME=	imapfilter
PORTVERSION=	2.5.3
PORTREVISION=	1
CATEGORIES=	mail

MAINTAINER=	stefan@FreeBSD.org
COMMENT=	IMAP mail filtering utility

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

USE_LUA=	5.1
USE_OPENSSL=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -I${LUA_INCDIR}
LDFLAGS+=	-L${LOCALBASE}/lib -L${LUA_LIBDIR}

USE_GITHUB=	yes
GH_ACCOUNT=	lefcha
GH_TAGNAME=	v${PORTVERSION}
GH_COMMIT=	69b6501

MAN1=		imapfilter.1
MAN5=		imapfilter_config.5
PORTDOCS=	LICENSE NEWS README
PLIST_FILES=	bin/imapfilter \
		%%DATADIR%%/account.lua \
		%%DATADIR%%/auxiliary.lua \
		%%DATADIR%%/common.lua \
		%%DATADIR%%/mailbox.lua \
		%%DATADIR%%/message.lua \
		%%DATADIR%%/options.lua \
		%%DATADIR%%/regex.lua \
		%%DATADIR%%/set.lua \
		%%EXAMPLESDIR%%/config.lua \
		%%EXAMPLESDIR%%/extend.lua
PLIST_DIRS=	%%DATADIR%% %%EXAMPLESDIR%%

post-patch:
	${REINPLACE_CMD} -Ee ' \
	    s|^(PREFIX =).*|\1${PREFIX}|; \
	    s|^(MYCFLAGS =).*|\1${CPPFLAGS}|; \
	    s|^(MYLDFLAGS =).*|\1${LDFLAGS}|; \
	    s|^(BINDIR =).*|\1${PREFIX}/bin|; \
	    s|^(SHAREDIR =).*|\1${DATADIR}|; \
	    s|^(MANDIR =).*|\1${MANPREFIX}/man|' \
	    ${WRKSRC}/src/Makefile

post-install:
	${STRIP_CMD} ${PREFIX}/bin/imapfilter
	@${MKDIR} ${DATADIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/samples && \
		${INSTALL_DATA} config.lua extend.lua \
			${EXAMPLESDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
