/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@interface XMLWrapperQuery : NSObject
+(void)initialize;
-(void)registerNamespace:(id)arg1 ;
-(id)executeXpathQuery:(xmlDoc*)arg1 query:(id)arg2 ctxNode:(xmlNode*)arg3 error:(id*)arg4 ;
-(BOOL)registerXpathNamespacesForCtx:(xmlXPathContext*)arg1 error:(id*)arg2 ;
-(id)elementForNode:(xmlNode*)arg1 ;
-(id)searchNodeWithXpathQuery:(xmlNode*)arg1 query:(id)arg2 error:(id*)arg3 ;
@end

