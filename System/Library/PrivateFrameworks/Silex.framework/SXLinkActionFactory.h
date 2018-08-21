/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionFactory.h>

@protocol SXURLActionFactory;
@class NSString;

@interface SXLinkActionFactory : NSObject <SXActionFactory> {

	id<SXURLActionFactory> _URLActionFactory;

}

@property (nonatomic,readonly) id<SXURLActionFactory> URLActionFactory;              //@synthesize URLActionFactory=_URLActionFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionForAddition:(id)arg1 ;
-(id)actionForURL:(id)arg1 ;
-(id<SXURLActionFactory>)URLActionFactory;
-(id)initWithURLActionFactory:(id)arg1 ;
@end

