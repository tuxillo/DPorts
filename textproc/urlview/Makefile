# ex:ts=8
# Ports collection makefile for:  urlview
# Date created:			  21 April 1998
# Whom:				  Josh Gilliam <josh@quick.net>
#
# $FreeBSD: ports/textproc/urlview/Makefile,v 1.38 2012/11/17 06:02:24 svnexp Exp $
#

PORTNAME=	urlview
PORTVERSION=	0.9
PORTREVISION=	7
CATEGORIES=	textproc www
MASTER_SITES=	ftp://ftp.mutt.org/mutt/contrib/ \
		ftp://ftp.cs.tu-berlin.de/pub/net/mail/mutt/contrib/ \
		ftp://ftp.fu-berlin.de/pub/unix/mail/mutt/contrib/ \
		ftp://ftp.gbnet.net/pub/mutt-international/contrib/ \
		ftp://ftp.gwdg.de/pub/unix/mail/mutt/international/contrib/ \
		http://seis.bris.ac.uk/~mexas/

MAINTAINER=	mexas@bristol.ac.uk
COMMENT=	URL extractor/launcher

GNU_CONFIGURE=	yes
MAN1=		urlview.1
PLIST_FILES=	bin/urlview \
		etc/urlview.conf.sample

post-patch:
	@${REINPLACE_CMD} -e 's,/etc,${PREFIX}&,' \
		-e 's/url_handler.sh/firefox/' \
		${WRKSRC}/*

post-install:
	${INSTALL_DATA} ${WRKSRC}/sample.urlview \
		${PREFIX}/etc/urlview.conf.sample

.include <bsd.port.mk>
