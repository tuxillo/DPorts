# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: ports/mail/claws-mail-perl/Makefile,v 1.50 2012/12/10 17:32:44 svnexp Exp $

PORTNAME=	perl
PORTVERSION=	0.9.20
CATEGORIES=	mail
MASTER_SITES=	http://www.claws-mail.org/downloads/plugins/
PKGNAMEPREFIX=	claws-mail-
DISTNAME=	perl_plugin-${PORTVERSION}

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Perl filtering plugin for Claws Mail

LICENSE=	GPLv3

BUILD_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail
RUN_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail

USE_GMAKE=	yes
USE_AUTOTOOLS=	autoconf
USE_PERL5=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	lib/claws-mail/plugins/perl_plugin.a \
		lib/claws-mail/plugins/perl_plugin.la \
		lib/claws-mail/plugins/perl_plugin.so \
		share/claws-mail/matcherrc2perlfilter.pl

post-install:
	@${MKDIR} ${PREFIX}/share/claws-mail
	@${INSTALL_SCRIPT} ${WRKSRC}/tools/matcherrc2perlfilter.pl \
		${PREFIX}/share/claws-mail/

.include <bsd.port.mk>
