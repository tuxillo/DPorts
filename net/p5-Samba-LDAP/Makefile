# New ports collection makefile for:	p5-Samba-LDAP
# Date created:		2006-09-18
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net/p5-Samba-LDAP/Makefile,v 1.6 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	Samba-LDAP
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Samba
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Manage a Samba PDC with an LDAP Backend

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-Readonly>=0:${PORTSDIR}/devel/p5-Readonly \
		p5-Class-Base>=0:${PORTSDIR}/devel/p5-Class-Base \
		p5-Config-Tiny>=0:${PORTSDIR}/devel/p5-Config-Tiny \
		p5-Crypt-SmbHash>=0:${PORTSDIR}/security/p5-Crypt-SmbHash \
		p5-perl-ldap>=0:${PORTSDIR}/net/p5-perl-ldap \
		p5-Regexp-DefaultFlags>=0:${PORTSDIR}/textproc/p5-Regexp-DefaultFlags \
		p5-UNIVERSAL-require>=0:${PORTSDIR}/devel/p5-UNIVERSAL-require \
		p5-Unicode-MapUTF8>=0:${PORTSDIR}/converters/p5-Unicode-MapUTF8
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Samba::LDAP.3 Samba::LDAP::Base.3 Samba::LDAP::Config.3 \
		Samba::LDAP::Group.3 Samba::LDAP::Machine.3 \
		Samba::LDAP::User.3

post-patch:
		${PERL} -pi -e '$$_ = "" if m|auto_install|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
