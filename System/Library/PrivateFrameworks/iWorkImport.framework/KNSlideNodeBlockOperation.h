/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class KNSlideNode;

@interface KNSlideNodeBlockOperation : NSBlockOperation {

	KNSlideNode* _slideNode;
	long long _type;

}

@property (assign,nonatomic,__weak) KNSlideNode * slideNode;              //@synthesize slideNode=_slideNode - In the implementation block
@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
-(KNSlideNode *)slideNode;
-(void)setSlideNode:(KNSlideNode *)arg1 ;
-(id)initWithSlideNode:(id)arg1 type:(long long)arg2 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
@end

