# $FreeBSD: ports/editors/codeeditor/Makefile,v 1.11 2012/11/17 05:57:12 svnexp Exp $

PORTNAME=	codeeditor
PORTVERSION=	0.4.4
PORTREVISION=	2
CATEGORIES=	editors gnustep
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	codeeditor
DISTNAME=	CodeEditor-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CodeEditor is a text and code editor for GNUstep

LICENSE=	GPLv2

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

WRKSRC=		${WRKDIR}/CodeEditor
MAKE_ENV+=	GNUSTEP_INSTALLATION_DIR=${GNUSTEP_LOCAL_ROOT}

post-patch:
	${REINPLACE_CMD} -e 's| bool| mybool|' -e 's|(bool|(mybool|' \
		${WRKSRC}/CodeEditorView/CodeEditorViewPreference.h \
		${WRKSRC}/CodeEditorView/CodeEditorViewPreference.m \
		${WRKSRC}/CodeEditorView/BlockHandler.h \
		${WRKSRC}/CodeEditorView/CodeEditorView.h \
		${WRKSRC}/CodeEditorView/CodeEditorView.m \
		${WRKSRC}/CodeEditor/DocumentController.m \
		${WRKSRC}/LanguageHandler/ObjCHandler/ObjCBlockHandler.m

.include <bsd.port.mk>
