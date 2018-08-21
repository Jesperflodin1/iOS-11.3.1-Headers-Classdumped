/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionActivityGroup.h>
@class NSString, NSArray;


@protocol SXActionActivityGroup <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * activities; 
@required
-(NSString *)title;
-(NSArray *)activities;

@end


@class NSString, NSArray, NSMutableArray;

@interface SXActionActivityGroup : NSObject <SXActionActivityGroup> {

	NSString* _title;
	NSMutableArray* _activities;

}

@property (nonatomic,retain) NSMutableArray * activities;              //@synthesize activities=_activities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(NSMutableArray *)activities;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(void)addActivity:(id)arg1 ;
@end

