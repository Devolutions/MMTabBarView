//
//  MMMetalTabStyle.h
//  MMTabBarView
//
//  Created by John Pannell on 2/17/06.
//  Copyright 2006 Positive Spin Media. All rights reserved.
//

#if __has_feature(modules)
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif
#import "MMTabStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMMetalTabStyle : NSObject <MMTabStyle>
{
	NSImage					*metalCloseButton;
	NSImage					*metalCloseButtonDown;
	NSImage					*metalCloseButtonOver;
	NSImage					*metalCloseDirtyButton;
	NSImage					*metalCloseDirtyButtonDown;
	NSImage					*metalCloseDirtyButtonOver;
}

@end

NS_ASSUME_NONNULL_END
