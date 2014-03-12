//
//  MDWampHello.h
//  MDWamp
//
//  Created by Niko Usai on 08/03/14.
//  Copyright (c) 2014 mogui.it. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDWampMessage.h"

@interface MDWampHello : MDWampMessage
@property(nonatomic, strong) NSString *realm;
@property(nonatomic, strong) NSDictionary *details;
- (id) initWithRoles:(NSArray*)roles;
@end