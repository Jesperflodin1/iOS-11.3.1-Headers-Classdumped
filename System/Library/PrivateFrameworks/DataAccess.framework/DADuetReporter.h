/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDAttribute, NSString;

@interface DADuetReporter : NSObject {

	CDAttribute* _attribute;
	NSString* _value;

}
+(id)session;
-(id)initWithActivityIdentifier:(id)arg1 ;
-(void)activityStarted;
-(void)activityStopped;
@end
