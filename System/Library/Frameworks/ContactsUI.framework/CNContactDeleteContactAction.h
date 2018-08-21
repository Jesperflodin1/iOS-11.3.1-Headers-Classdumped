/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIExternalComponentsFactory, CNUICoreRecentsManager;

@interface CNContactDeleteContactAction : CNContactAction {

	CNUIExternalComponentsFactory* _componentsFactory;
	CNUICoreRecentsManager* _recentsManager;

}

@property (nonatomic,readonly) CNUIExternalComponentsFactory * componentsFactory;              //@synthesize componentsFactory=_componentsFactory - In the implementation block
@property (nonatomic,readonly) CNUICoreRecentsManager * recentsManager;                        //@synthesize recentsManager=_recentsManager - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(BOOL)deleteContact;
-(void)showDeleteFailureAlert;
-(CNUICoreRecentsManager *)recentsManager;
-(id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3 ;
@end

