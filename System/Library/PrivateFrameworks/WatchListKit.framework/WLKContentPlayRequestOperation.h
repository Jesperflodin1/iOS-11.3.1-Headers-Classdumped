/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString;

@interface WLKContentPlayRequestOperation : WLKNetworkRequestOperation {

	NSString* _canonicalID;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(id)responseProcessor;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
@end

