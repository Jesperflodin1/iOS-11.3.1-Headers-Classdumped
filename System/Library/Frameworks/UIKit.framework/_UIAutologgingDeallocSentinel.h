/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	BOOL _called;
	NSString* _message;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL called;                   //@synthesize called=_called - In the implementation block
-(void)dealloc;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(BOOL)called;
-(void)setCalled:(BOOL)arg1 ;
@end

