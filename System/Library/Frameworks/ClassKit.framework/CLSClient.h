/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSClientInterface.h>

@protocol CLSClientDelegate;
@class NSString;

@interface CLSClient : NSObject <CLSClientInterface> {

	id<CLSClientDelegate> _delagate;

}

@property (assign,nonatomic,__weak) id<CLSClientDelegate> delagate;              //@synthesize delagate=_delagate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)clientRemote_devModeDidChange:(int)arg1 ;
-(oneway void)clientRemote_databaseRecreated;
-(void)setDelagate:(id<CLSClientDelegate>)arg1 ;
-(id<CLSClientDelegate>)delagate;
@end

