/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface MFBridgeSettingsMailboxSelection : NSObject {

	unsigned long long _inboxesFilterTypes;
	NSSet* _selectedMailboxes;

}

@property (assign,nonatomic) unsigned long long inboxesFilterTypes;              //@synthesize inboxesFilterTypes=_inboxesFilterTypes - In the implementation block
@property (nonatomic,retain) NSSet * selectedMailboxes;                          //@synthesize selectedMailboxes=_selectedMailboxes - In the implementation block
-(void)setInboxesFilterTypes:(unsigned long long)arg1 ;
-(void)setSelectedMailboxes:(NSSet *)arg1 ;
-(NSSet *)selectedMailboxes;
-(unsigned long long)inboxesFilterTypes;
-(void)dealloc;
-(id)description;
@end

