# $FreeBSD: ports/devel/ruby-build/Makefile,v 1.2 2013/01/15 22:44:28 svnexp Exp $

PORTNAME=	ruby-build
PORTVERSION=	20130104
PORTREVISION=	1
CATEGORIES=	devel ruby
MASTER_SITES=	GH

MAINTAINER=	fmb@onibox.net
COMMENT=	Compile and install different ruby versions

LICENSE=	RUBY-BUILD
LICENSE_NAME=	Sam Stephenson
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=${_LICENSE_PERMS_DEFAULT}

RUN_DEPENDS=	autoconf:${PORTSDIR}/devel/autoconf \
		curl:${PORTSDIR}/ftp/curl \
		gmake:${PORTSDIR}/devel/gmake

OPTIONS_DEFINE=	RBENV
RBENV_DESC=	Install rbenv for installation support
OPTIONS_DEFAULT=	RBENV

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MRBENV}
RUN_DEPENDS+=	rbenv:${PORTSDIR}/devel/rbenv
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	sstephenson
GH_PROJECT=	${PORTNAME}
GH_COMMIT=	9ef0e06
GH_TAGNAME=	v${PORTVERSION}

NO_BUILD=	yes

PLIST_FILES=	bin/ruby-build \
		libexec/rbenv-install \
		libexec/rbenv-uninstall
PORTDATA=	*

post-patch-script:
	@${REINPLACE_CMD} -e 's|make |gmake |' \
		${WRKSRC}/bin/ruby-build
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bin/ruby-build ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/rbenv-install ${PREFIX}/libexec
	${INSTALL_SCRIPT} ${WRKSRC}/bin/rbenv-uninstall ${PREFIX}/libexec
	@${MKDIR} ${DATADIR}
	( cd ${WRKSRC}/share/ruby-build && ${COPYTREE_BIN} \* ${DATADIR} )

.include <bsd.port.mk>
