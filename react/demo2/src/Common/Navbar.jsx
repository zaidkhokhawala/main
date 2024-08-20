import React from 'react'
import { NavLink } from 'react-router-dom'
function Navbar() {
  return (

<nav class="navbar navbar-expand-sm bg-dark navbar-dark">
  <div class="container-fluid">
    <ul class="navbar-nav">
      <li class="nav-item">
      </li>
      <li class="nav-item">
      <NavLink className="nav-link " to="/About">About</NavLink>
      </li>
      <li class="nav-item">
      <NavLink className="nav-link " to="/Contact">Contact</NavLink>
      </li>
      <li class="nav-item">
      <NavLink className="nav-link " to="/">Home</NavLink>
      </li>
    </ul>
  </div>
</nav>
  )
}

export default Navbar