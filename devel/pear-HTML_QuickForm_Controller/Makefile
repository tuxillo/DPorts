# Ports collection makefile for:  pear-HTML_QuickForm_Controller
# Date created:			  2 September 2004
# Whom:				  Dmitry Karasik (<dk@catpipe.net>)
#
# $FreeBSD: ports/devel/pear-HTML_QuickForm_Controller/Makefile,v 1.9 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	HTML_QuickForm_Controller
PORTVERSION=	1.0.9
CATEGORIES=	devel www pear

MAINTAINER=	dk@catpipe.net
COMMENT=	The add-on to HTML_QuickForm that allows building of multipage forms

BUILD_DEPENDS=	${PEARDIR}/HTML/QuickForm.php:${PORTSDIR}/devel/pear-HTML_QuickForm
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	HTML/QuickForm
FILES=		Action.php Controller.php Page.php Action/Back.php Action/Direct.php \
		Action/Display.php Action/Jump.php Action/Next.php Action/Submit.php
EXAMPLES=	simple.php tabbed.php wizard.php regWizard.php upload.php \
		templates/upload.html statemachine.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
