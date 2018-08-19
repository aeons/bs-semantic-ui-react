
[@bs.deriving jsConverter]
type countryName = [
  | `ad
  | `andorra
  | `ae
  | [@bs.as "united arab emirates"] `united_arab_emirates
  | `uae
  | `af
  | `afghanistan
  | `ag
  | `antigua
  | `ai
  | `anguilla
  | `al
  | `albania
  | `am
  | `armenia
  | `an
  | [@bs.as "netherlands antilles"] `netherlands_antilles
  | `ao
  | `angola
  | `ar
  | `argentina
  | [@bs.as "as"] `as_
  | [@bs.as "american samoa"] `american_samoa
  | `at
  | `austria
  | `au
  | `australia
  | `aw
  | `aruba
  | `ax
  | [@bs.as "aland islands"] `aland_islands
  | `az
  | `azerbaijan
  | `ba
  | `bosnia
  | `bb
  | `barbados
  | `bd
  | `bangladesh
  | `be
  | `belgium
  | `bf
  | [@bs.as "burkina faso"] `burkina_faso
  | `bg
  | `bulgaria
  | `bh
  | `bahrain
  | `bi
  | `burundi
  | `bj
  | `benin
  | `bm
  | `bermuda
  | `bn
  | `brunei
  | `bo
  | `bolivia
  | `br
  | `brazil
  | `bs
  | `bahamas
  | `bt
  | `bhutan
  | `bv
  | [@bs.as "bouvet island"] `bouvet_island
  | `bw
  | `botswana
  | `by
  | `belarus
  | `bz
  | `belize
  | `ca
  | `canada
  | `cc
  | [@bs.as "cocos islands"] `cocos_islands
  | `cd
  | `congo
  | `cf
  | [@bs.as "central african republic"] `central_african_republic
  | `cg
  | [@bs.as "congo brazzaville"] `congo_brazzaville
  | `ch
  | `switzerland
  | `ci
  | [@bs.as "cote divoire"] `cote_divoire
  | `ck
  | [@bs.as "cook islands"] `cook_islands
  | `cl
  | `chile
  | `cm
  | `cameroon
  | `cn
  | `china
  | `co
  | `colombia
  | `cr
  | [@bs.as "costa rica"] `costa_rica
  | `cs
  | `cu
  | `cuba
  | `cv
  | [@bs.as "cape verde"] `cape_verde
  | `cx
  | [@bs.as "christmas island"] `christmas_island
  | `cy
  | `cyprus
  | `cz
  | [@bs.as "czech republic"] `czech_republic
  | `de
  | `germany
  | `dj
  | `djibouti
  | `dk
  | `denmark
  | `dm
  | `dominica
  | [@bs.as "do"] `do_
  | [@bs.as "dominican republic"] `dominican_republic
  | `dz
  | `algeria
  | `ec
  | `ecuador
  | `ee
  | `estonia
  | `eg
  | `egypt
  | `eh
  | [@bs.as "western sahara"] `western_sahara
  | `er
  | `eritrea
  | `es
  | `spain
  | `et
  | `ethiopia
  | `eu
  | [@bs.as "european union"] `european_union
  | `fi
  | `finland
  | `fj
  | `fiji
  | `fk
  | [@bs.as "falkland islands"] `falkland_islands
  | `fm
  | `micronesia
  | `fo
  | [@bs.as "faroe islands"] `faroe_islands
  | `fr
  | `france
  | `ga
  | `gabon
  | `gb
  | [@bs.as "united kingdom"] `united_kingdom
  | `gd
  | `grenada
  | `ge
  | `georgia
  | `gf
  | [@bs.as "french guiana"] `french_guiana
  | `gh
  | `ghana
  | `gi
  | `gibraltar
  | `gl
  | `greenland
  | `gm
  | `gambia
  | `gn
  | `guinea
  | `gp
  | `guadeloupe
  | `gq
  | [@bs.as "equatorial guinea"] `equatorial_guinea
  | `gr
  | `greece
  | `gs
  | [@bs.as "sandwich islands"] `sandwich_islands
  | `gt
  | `guatemala
  | `gu
  | `guam
  | `gw
  | [@bs.as "guinea bissau"] `guinea_bissau
  | `gy
  | `guyana
  | `hk
  | [@bs.as "hong kong"] `hong_kong
  | `hm
  | [@bs.as "heard island"] `heard_island
  | `hn
  | `honduras
  | `hr
  | `croatia
  | `ht
  | `haiti
  | `hu
  | `hungary
  | `id
  | `indonesia
  | `ie
  | `ireland
  | `il
  | `israel
  | [@bs.as "in"] `in_
  | `india
  | `io
  | [@bs.as "indian ocean territory"] `indian_ocean_territory
  | `iq
  | `iraq
  | `ir
  | `iran
  | `is
  | `iceland
  | `it
  | `italy
  | `jm
  | `jamaica
  | `jo
  | `jordan
  | `jp
  | `japan
  | `ke
  | `kenya
  | `kg
  | `kyrgyzstan
  | `kh
  | `cambodia
  | `ki
  | `kiribati
  | `km
  | `comoros
  | `kn
  | [@bs.as "saint kitts and nevis"] `saint_kitts_and_nevis
  | `kp
  | [@bs.as "north korea"] `north_korea
  | `kr
  | [@bs.as "south korea"] `south_korea
  | `kw
  | `kuwait
  | `ky
  | [@bs.as "cayman islands"] `cayman_islands
  | `kz
  | `kazakhstan
  | `la
  | `laos
  | `lb
  | `lebanon
  | `lc
  | [@bs.as "saint lucia"] `saint_lucia
  | `li
  | `liechtenstein
  | `lk
  | [@bs.as "sri lanka"] `sri_lanka
  | `lr
  | `liberia
  | `ls
  | `lesotho
  | `lt
  | `lithuania
  | `lu
  | `luxembourg
  | `lv
  | `latvia
  | `ly
  | `libya
  | `ma
  | `morocco
  | `mc
  | `monaco
  | `md
  | `moldova
  | `me
  | `montenegro
  | `mg
  | `madagascar
  | `mh
  | [@bs.as "marshall islands"] `marshall_islands
  | `mk
  | `macedonia
  | `ml
  | `mali
  | `mm
  | `myanmar
  | `burma
  | `mn
  | `mongolia
  | `mo
  | `macau
  | `mp
  | [@bs.as "northern mariana islands"] `northern_mariana_islands
  | `mq
  | `martinique
  | `mr
  | `mauritania
  | `ms
  | `montserrat
  | `mt
  | `malta
  | `mu
  | `mauritius
  | `mv
  | `maldives
  | `mw
  | `malawi
  | `mx
  | `mexico
  | `my
  | `malaysia
  | `mz
  | `mozambique
  | `na
  | `namibia
  | `nc
  | [@bs.as "new caledonia"] `new_caledonia
  | `ne
  | `niger
  | `nf
  | [@bs.as "norfolk island"] `norfolk_island
  | `ng
  | `nigeria
  | `ni
  | `nicaragua
  | `nl
  | `netherlands
  | `no
  | `norway
  | `np
  | `nepal
  | `nr
  | `nauru
  | `nu
  | `niue
  | `nz
  | [@bs.as "new zealand"] `new_zealand
  | `om
  | `oman
  | `pa
  | `panama
  | `pe
  | `peru
  | `pf
  | [@bs.as "french polynesia"] `french_polynesia
  | `pg
  | [@bs.as "new guinea"] `new_guinea
  | `ph
  | `philippines
  | `pk
  | `pakistan
  | `pl
  | `poland
  | `pm
  | [@bs.as "saint pierre"] `saint_pierre
  | `pn
  | [@bs.as "pitcairn islands"] `pitcairn_islands
  | `pr
  | [@bs.as "puerto rico"] `puerto_rico
  | `ps
  | `palestine
  | `pt
  | `portugal
  | `pw
  | `palau
  | `py
  | `paraguay
  | `qa
  | `qatar
  | `re
  | `reunion
  | `ro
  | `romania
  | `rs
  | `serbia
  | `ru
  | `russia
  | `rw
  | `rwanda
  | `sa
  | [@bs.as "saudi arabia"] `saudi_arabia
  | `sb
  | [@bs.as "solomon islands"] `solomon_islands
  | `sc
  | `seychelles
  | [@bs.as "gb sct"] `gb_sct
  | `scotland
  | `sd
  | `sudan
  | `se
  | `sweden
  | `sg
  | `singapore
  | `sh
  | [@bs.as "saint helena"] `saint_helena
  | `si
  | `slovenia
  | `sj
  | `svalbard
  | [@bs.as "jan mayen"] `jan_mayen
  | `sk
  | `slovakia
  | `sl
  | [@bs.as "sierra leone"] `sierra_leone
  | `sm
  | [@bs.as "san marino"] `san_marino
  | `sn
  | `senegal
  | `so
  | `somalia
  | `sr
  | `suriname
  | `st
  | [@bs.as "sao tome"] `sao_tome
  | `sv
  | [@bs.as "el salvador"] `el_salvador
  | `sy
  | `syria
  | `sz
  | `swaziland
  | `tc
  | [@bs.as "caicos islands"] `caicos_islands
  | `td
  | `chad
  | `tf
  | [@bs.as "french territories"] `french_territories
  | `tg
  | `togo
  | `th
  | `thailand
  | `tj
  | `tajikistan
  | `tk
  | `tokelau
  | `tl
  | `timorleste
  | `tm
  | `turkmenistan
  | `tn
  | `tunisia
  | [@bs.as "to"] `to_
  | `tonga
  | `tr
  | `turkey
  | `tt
  | `trinidad
  | `tv
  | `tuvalu
  | `tw
  | `taiwan
  | `tz
  | `tanzania
  | `ua
  | `ukraine
  | `ug
  | `uganda
  | `um
  | [@bs.as "us minor islands"] `us_minor_islands
  | `us
  | `america
  | [@bs.as "united states"] `united_states
  | `uy
  | `uruguay
  | `uz
  | `uzbekistan
  | `va
  | [@bs.as "vatican city"] `vatican_city
  | `vc
  | [@bs.as "saint vincent"] `saint_vincent
  | `ve
  | `venezuela
  | `vg
  | [@bs.as "british virgin islands"] `british_virgin_islands
  | `vi
  | [@bs.as "us virgin islands"] `us_virgin_islands
  | `vn
  | `vietnam
  | `vu
  | `vanuatu
  | [@bs.as "gb wls"] `gb_wls
  | `wales
  | `wf
  | [@bs.as "wallis and futuna"] `wallis_and_futuna
  | `ws
  | `samoa
  | `ye
  | `yemen
  | `yt
  | `mayotte
  | `za
  | [@bs.as "south africa"] `south_africa
  | `zm
  | `zambia
  | `zw
  | `zimbabwe
];


[@bs.module "semantic-ui-react"] external reactClass: ReasonReact.reactClass = "Flag";

[@bs.deriving abstract]
type jsProps = {
  className: Js.nullable(string),
  [@bs.as "as"] as_: Js.nullable(string),
  name: string
}

let make = (~className=?, ~as_=?, ~name: countryName, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=reactClass,
    ~props=jsProps(
      ~className=Js.Nullable.fromOption(className),
      ~as_=Js.Nullable.fromOption(as_),
      ~name=countryNameToJs(name),
    ),
    children,
  );
