/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKDirectoryRecord : NSObject {

	NSString* _displayName;
	NSString* _preferredAddress;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * preferredAddress;              //@synthesize preferredAddress=_preferredAddress - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(id)description;
-(NSString *)displayName;
-(void)setPreferredAddress:(NSString *)arg1 ;
-(NSString *)preferredAddress;
@end
