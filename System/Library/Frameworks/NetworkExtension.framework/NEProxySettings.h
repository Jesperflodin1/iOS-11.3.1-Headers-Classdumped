/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEProxyServer, NSArray, NSURL, NSString;

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NEProxyServer* _HTTPServer;
	NEProxyServer* _HTTPSServer;
	BOOL _autoProxyConfigurationEnabled;
	BOOL _HTTPEnabled;
	BOOL _HTTPSEnabled;
	BOOL _excludeSimpleHostnames;
	BOOL _autoProxyDiscovery;
	BOOL _FTPEnabled;
	BOOL _SOCKSEnabled;
	BOOL _RTSPEnabled;
	BOOL _gopherEnabled;
	BOOL _usePassiveFTP;
	NSArray* _exceptionList;
	NSURL* _proxyAutoConfigURL;
	NSString* _proxyAutoConfigJavaScript;
	NEProxyServer* _FTPServer;
	NEProxyServer* _SOCKSServer;
	NEProxyServer* _RTSPServer;
	NEProxyServer* _gopherServer;
	NSArray* _supplementalMatchDomains;
	NSArray* _supplementalMatchOrders;

}

@property (assign) BOOL autoProxyDiscovery;                                  //@synthesize autoProxyDiscovery=_autoProxyDiscovery - In the implementation block
@property (copy) NSURL * proxyAutoConfigURL;                                 //@synthesize proxyAutoConfigURL=_proxyAutoConfigURL - In the implementation block
@property (copy) NSString * proxyAutoConfigJavaScript;                       //@synthesize proxyAutoConfigJavaScript=_proxyAutoConfigJavaScript - In the implementation block
@property (assign) BOOL FTPEnabled;                                          //@synthesize FTPEnabled=_FTPEnabled - In the implementation block
@property (copy) NEProxyServer * FTPServer;                                  //@synthesize FTPServer=_FTPServer - In the implementation block
@property (setter=OCKSEnabled) BOOL SOCKSEnabled;                            //@synthesize SOCKSEnabled=_SOCKSEnabled - In the implementation block
@property (setter=OCKSServer,copy) NEProxyServer * SOCKSServer;              //@synthesize SOCKSServer=_SOCKSServer - In the implementation block
@property (assign) BOOL RTSPEnabled;                                         //@synthesize RTSPEnabled=_RTSPEnabled - In the implementation block
@property (copy) NEProxyServer * RTSPServer;                                 //@synthesize RTSPServer=_RTSPServer - In the implementation block
@property (assign) BOOL gopherEnabled;                                       //@synthesize gopherEnabled=_gopherEnabled - In the implementation block
@property (copy) NEProxyServer * gopherServer;                               //@synthesize gopherServer=_gopherServer - In the implementation block
@property (assign) BOOL usePassiveFTP;                                       //@synthesize usePassiveFTP=_usePassiveFTP - In the implementation block
@property (copy) NSArray * supplementalMatchDomains;                         //@synthesize supplementalMatchDomains=_supplementalMatchDomains - In the implementation block
@property (copy) NSArray * supplementalMatchOrders;                          //@synthesize supplementalMatchOrders=_supplementalMatchOrders - In the implementation block
@property (readonly) BOOL enabled; 
@property (assign) BOOL autoProxyConfigurationEnabled;                       //@synthesize autoProxyConfigurationEnabled=_autoProxyConfigurationEnabled - In the implementation block
@property (copy) NSURL * proxyAutoConfigurationURL; 
@property (copy) NSString * proxyAutoConfigurationJavaScript; 
@property (assign) BOOL HTTPEnabled;                                         //@synthesize HTTPEnabled=_HTTPEnabled - In the implementation block
@property (copy) NEProxyServer * HTTPServer; 
@property (assign) BOOL HTTPSEnabled;                                        //@synthesize HTTPSEnabled=_HTTPSEnabled - In the implementation block
@property (copy) NEProxyServer * HTTPSServer; 
@property (assign) BOOL excludeSimpleHostnames;                              //@synthesize excludeSimpleHostnames=_excludeSimpleHostnames - In the implementation block
@property (copy) NSArray * exceptionList;                                    //@synthesize exceptionList=_exceptionList - In the implementation block
@property (copy) NSArray * matchDomains; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)enabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(BOOL)needToUpdateKeychain;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)syncWithKeychain;
-(void)removeKeychainItems;
-(void)copyPasswordsFromKeychain;
-(NSArray *)matchDomains;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(NEProxyServer *)HTTPServer;
-(NEProxyServer *)HTTPSServer;
-(BOOL)autoProxyDiscovery;
-(BOOL)autoProxyConfigurationEnabled;
-(NSURL *)proxyAutoConfigURL;
-(NSString *)proxyAutoConfigJavaScript;
-(BOOL)HTTPEnabled;
-(BOOL)HTTPSEnabled;
-(BOOL)FTPEnabled;
-(NEProxyServer *)FTPServer;
-(BOOL)SOCKSEnabled;
-(NEProxyServer *)SOCKSServer;
-(BOOL)RTSPEnabled;
-(NEProxyServer *)RTSPServer;
-(BOOL)gopherEnabled;
-(NEProxyServer *)gopherServer;
-(BOOL)excludeSimpleHostnames;
-(NSArray *)exceptionList;
-(BOOL)usePassiveFTP;
-(NSArray *)supplementalMatchDomains;
-(NSArray *)supplementalMatchOrders;
-(void)setAutoProxyDiscovery:(BOOL)arg1 ;
-(void)setAutoProxyConfigurationEnabled:(BOOL)arg1 ;
-(void)setProxyAutoConfigURL:(NSURL *)arg1 ;
-(void)setProxyAutoConfigJavaScript:(NSString *)arg1 ;
-(void)setHTTPEnabled:(BOOL)arg1 ;
-(void)setHTTPServer:(NEProxyServer *)arg1 ;
-(void)setHTTPSEnabled:(BOOL)arg1 ;
-(void)setHTTPSServer:(NEProxyServer *)arg1 ;
-(void)setFTPEnabled:(BOOL)arg1 ;
-(void)setFTPServer:(NEProxyServer *)arg1 ;
-(void)setSOCKSEnabled:(BOOL)arg1 ;
-(void)setSOCKSServer:(NEProxyServer *)arg1 ;
-(void)setRTSPEnabled:(BOOL)arg1 ;
-(void)setRTSPServer:(NEProxyServer *)arg1 ;
-(void)setGopherEnabled:(BOOL)arg1 ;
-(void)setGopherServer:(NEProxyServer *)arg1 ;
-(void)setExcludeSimpleHostnames:(BOOL)arg1 ;
-(void)setExceptionList:(NSArray *)arg1 ;
-(void)setUsePassiveFTP:(BOOL)arg1 ;
-(void)setSupplementalMatchDomains:(NSArray *)arg1 ;
-(void)setSupplementalMatchOrders:(NSArray *)arg1 ;
-(NSURL *)proxyAutoConfigurationURL;
-(void)setProxyAutoConfigurationURL:(NSURL *)arg1 ;
-(NSString *)proxyAutoConfigurationJavaScript;
-(void)setProxyAutoConfigurationJavaScript:(NSString *)arg1 ;
@end

